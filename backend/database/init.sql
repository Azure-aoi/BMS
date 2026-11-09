-- =============================================================
-- 图书管理系统 数据库初始化脚本
-- 运行：mysql -u root -p123456 --default-character-set=utf8mb4 < init.sql
-- =============================================================

CREATE DATABASE IF NOT EXISTS library_db
    CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;

-- 应用专用账号（避免程序使用 root）
CREATE USER IF NOT EXISTS 'library_user'@'localhost' IDENTIFIED BY 'Library@2026';
GRANT ALL PRIVILEGES ON library_db.* TO 'library_user'@'localhost';
FLUSH PRIVILEGES;

USE library_db;

SET FOREIGN_KEY_CHECKS = 0;
DROP TABLE IF EXISTS operation_log;
DROP TABLE IF EXISTS message;
DROP TABLE IF EXISTS favorite;
DROP TABLE IF EXISTS reservation;
DROP TABLE IF EXISTS borrow_record;
DROP TABLE IF EXISTS book;
DROP TABLE IF EXISTS book_category;
DROP TABLE IF EXISTS reader;
DROP TABLE IF EXISTS reader_category;
DROP TABLE IF EXISTS admin;
DROP TABLE IF EXISTS system_config;
SET FOREIGN_KEY_CHECKS = 1;

-- -------------------------------------------------------------
-- 读者类别
-- -------------------------------------------------------------
CREATE TABLE reader_category (
    category_id INT PRIMARY KEY AUTO_INCREMENT,
    name        VARCHAR(50) NOT NULL UNIQUE,
    max_borrow  INT NOT NULL DEFAULT 5,
    note        VARCHAR(255)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- -------------------------------------------------------------
-- 读者
-- -------------------------------------------------------------
CREATE TABLE reader (
    reader_id     INT PRIMARY KEY AUTO_INCREMENT,
    student_no    VARCHAR(32) NOT NULL UNIQUE,
    name          VARCHAR(50) NOT NULL,
    gender        ENUM('男','女','其他') NOT NULL DEFAULT '其他',
    category_id   INT NOT NULL,
    department    VARCHAR(100),
    phone         VARCHAR(30),
    email         VARCHAR(100),
    address       VARCHAR(255),
    password_hash CHAR(64) NOT NULL,
    is_frozen     TINYINT(1) NOT NULL DEFAULT 0,
    created_at    DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
    CONSTRAINT fk_reader_category FOREIGN KEY (category_id) REFERENCES reader_category(category_id)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- -------------------------------------------------------------
-- 管理员
-- -------------------------------------------------------------
CREATE TABLE admin (
    admin_id      INT PRIMARY KEY AUTO_INCREMENT,
    username      VARCHAR(50) NOT NULL UNIQUE,
    password_hash CHAR(64) NOT NULL,
    display_name  VARCHAR(50) NOT NULL,
    created_at    DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- -------------------------------------------------------------
-- 图书类别
-- -------------------------------------------------------------
CREATE TABLE book_category (
    category_id INT PRIMARY KEY AUTO_INCREMENT,
    name        VARCHAR(50) NOT NULL UNIQUE,
    keywords    VARCHAR(255),
    note        VARCHAR(255)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- -------------------------------------------------------------
-- 图书
-- -------------------------------------------------------------
CREATE TABLE book (
    book_id          INT PRIMARY KEY AUTO_INCREMENT,
    isbn             VARCHAR(20) NOT NULL UNIQUE,
    title            VARCHAR(200) NOT NULL,
    author           VARCHAR(100) NOT NULL,
    publisher        VARCHAR(100),
    publish_date     DATE,
    category_id      INT,
    price            DECIMAL(10,2) NOT NULL DEFAULT 0,
    total_copies     INT NOT NULL DEFAULT 1,
    available_copies INT NOT NULL DEFAULT 1,
    pages            INT,
    keywords         VARCHAR(255),
    summary          TEXT,
    cover_path       VARCHAR(255),
    created_at       DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
    CONSTRAINT fk_book_category FOREIGN KEY (category_id) REFERENCES book_category(category_id),
    CONSTRAINT chk_book_copies CHECK (available_copies >= 0 AND available_copies <= total_copies),
    INDEX idx_book_title (title),
    INDEX idx_book_author (author)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- -------------------------------------------------------------
-- 借阅记录
-- -------------------------------------------------------------
CREATE TABLE borrow_record (
    record_id   INT PRIMARY KEY AUTO_INCREMENT,
    reader_id   INT NOT NULL,
    book_id     INT NOT NULL,
    borrow_date DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
    due_date    DATE NOT NULL,
    return_date DATETIME NULL,
    renew_count INT NOT NULL DEFAULT 0,
    status      ENUM('borrowed','returned') NOT NULL DEFAULT 'borrowed',
    CONSTRAINT fk_borrow_reader FOREIGN KEY (reader_id) REFERENCES reader(reader_id) ON DELETE CASCADE,
    CONSTRAINT fk_borrow_book FOREIGN KEY (book_id) REFERENCES book(book_id) ON DELETE CASCADE,
    INDEX idx_borrow_reader (reader_id, status),
    INDEX idx_borrow_book (book_id, status),
    INDEX idx_borrow_due (due_date, status)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- -------------------------------------------------------------
-- 预约
-- -------------------------------------------------------------
CREATE TABLE reservation (
    reservation_id INT PRIMARY KEY AUTO_INCREMENT,
    reader_id      INT NOT NULL,
    book_id        INT NOT NULL,
    reserve_date   DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
    status         ENUM('pending','ready','cancelled','fulfilled') NOT NULL DEFAULT 'pending',
    note           VARCHAR(255),
    CONSTRAINT fk_reserve_reader FOREIGN KEY (reader_id) REFERENCES reader(reader_id) ON DELETE CASCADE,
    CONSTRAINT fk_reserve_book FOREIGN KEY (book_id) REFERENCES book(book_id) ON DELETE CASCADE,
    INDEX idx_reserve_reader (reader_id, status),
    INDEX idx_reserve_book (book_id, status)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- -------------------------------------------------------------
-- 收藏
-- -------------------------------------------------------------
CREATE TABLE favorite (
    reader_id  INT NOT NULL,
    book_id    INT NOT NULL,
    created_at DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
    PRIMARY KEY (reader_id, book_id),
    CONSTRAINT fk_fav_reader FOREIGN KEY (reader_id) REFERENCES reader(reader_id) ON DELETE CASCADE,
    CONSTRAINT fk_fav_book FOREIGN KEY (book_id) REFERENCES book(book_id) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- -------------------------------------------------------------
-- 站内消息
-- -------------------------------------------------------------
CREATE TABLE message (
    message_id     INT PRIMARY KEY AUTO_INCREMENT,
    recipient_type ENUM('reader','admin') NOT NULL,
    recipient_id   INT NOT NULL,
    title          VARCHAR(100) NOT NULL,
    content        VARCHAR(500) NOT NULL,
    is_read        TINYINT(1) NOT NULL DEFAULT 0,
    created_at     DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
    INDEX idx_message_recipient (recipient_type, recipient_id, is_read)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- -------------------------------------------------------------
-- 操作日志
-- -------------------------------------------------------------
CREATE TABLE operation_log (
    log_id     INT PRIMARY KEY AUTO_INCREMENT,
    admin_id   INT,
    action     VARCHAR(50) NOT NULL,
    detail     VARCHAR(500),
    created_at DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
    INDEX idx_log_time (created_at)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- -------------------------------------------------------------
-- 系统配置
-- -------------------------------------------------------------
CREATE TABLE system_config (
    config_key   VARCHAR(50) PRIMARY KEY,
    config_value VARCHAR(255) NOT NULL,
    description  VARCHAR(255)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- =============================================================
-- 种子数据
-- =============================================================
INSERT INTO reader_category (category_id, name, max_borrow, note) VALUES
(1, '本科生', 5,  '全日制本科在读学生'),
(2, '研究生', 10, '硕士、博士研究生'),
(3, '教师',   20, '在职教职工'),
(4, '校外读者', 2, '临时借阅证持有者');

INSERT INTO admin (admin_id, username, password_hash, display_name) VALUES
(1, 'admin', SHA2('admin123', 256), '系统管理员');

INSERT INTO reader (reader_id, student_no, name, gender, category_id, department, phone, email, address, password_hash, is_frozen) VALUES
(1, '20230001', '张明',   '男', 1, '计算机学院', '13800000001', 'zhangming@example.com', '中山大学东校区', SHA2('123456', 256), 0),
(2, '20230002', '李小雨', '女', 2, '软件工程学院', '13800000002', 'lixiaoyu@example.com', '中山大学南校区', SHA2('123456', 256), 0),
(3, 'T2020001', '王建国', '男', 3, '数学学院',   '13800000003', 'wangjianguo@example.com', '中山大学北校区', SHA2('123456', 256), 0),
(4, '20230003', '陈思',   '女', 1, '中文系',     '13800000004', 'chensi@example.com', '中山大学珠海校区', SHA2('123456', 256), 0);

INSERT INTO book_category (category_id, name, keywords, note) VALUES
(1, '计算机', '编程,算法,软件', '计算机与信息技术'),
(2, '文学',   '小说,散文,诗歌', '中外文学作品'),
(3, '历史',   '中国史,世界史', '历史学著作'),
(4, '科学',   '物理,数学,科普', '自然科学与科普'),
(5, '艺术',   '绘画,音乐,设计', '艺术类图书');

INSERT INTO book (book_id, isbn, title, author, publisher, publish_date, category_id, price, total_copies, available_copies, pages, keywords, summary) VALUES
(1,  '9787115428028', '深入理解计算机系统', 'Randal E. Bryant', '机械工业出版社', '2016-11-01', 1, 139.00, 3, 2, 737, '计算机系统,体系结构', '从程序员视角理解计算机系统的经典教材，涵盖数据表示、汇编、处理器、存储器层次与链接等主题。'),
(2,  '9787302187654', '软件工程导论', '张海藩', '清华大学出版社', '2008-02-01', 1, 35.00, 5, 5, 386, '软件工程,需求分析', '系统介绍软件工程的基本概念、方法、工具与项目管理，适合初学者建立完整知识框架。'),
(3,  '9787020002207', '红楼梦', '曹雪芹', '人民文学出版社', '1996-12-01', 2, 59.70, 4, 3, 1606, '古典小说,四大名著', '以贾、史、王、薛四大家族的兴衰为背景，展现封建社会末期的人情百态。'),
(4,  '9787536692930', '三体', '刘慈欣', '重庆出版社', '2008-01-01', 2, 23.00, 6, 6, 302, '科幻,宇宙,文明', '地球文明与三体文明的信息交流、生死搏杀及两个文明在宇宙中的兴衰历程。'),
(5,  '9787101003048', '史记', '司马迁', '中华书局', '2014-08-01', 3, 128.00, 2, 1, 2450, '纪传体,通史', '中国第一部纪传体通史，记载从黄帝到汉武帝时期约三千年的历史。'),
(6,  '9787508675848', '人类简史', '尤瓦尔·赫拉利', '中信出版社', '2017-02-01', 3, 68.00, 3, 3, 440, '人类史,文明演化', '从认知革命、农业革命到科学革命，重新审视人类文明的演化路径。'),
(7,  '9787115546081', '算法导论', 'Thomas H. Cormen', '人民邮电出版社', '2021-05-01', 1, 128.00, 2, 0, 780, '算法,数据结构', '算法领域的经典教材，全面覆盖排序、图算法、动态规划、NP完全性等内容。'),
(8,  '9787530216781', '活着', '余华', '北京十月文艺出版社', '2017-06-01', 2, 45.00, 5, 5, 191, '当代小说,人生', '讲述福贵一生的苦难与坚韧，在时代洪流中呈现普通人的生存意志。'),
(9,  '9787544253994', '百年孤独', '加西亚·马尔克斯', '南海出版公司', '2011-06-01', 2, 39.50, 3, 3, 360, '魔幻现实主义,拉美文学', '布恩迪亚家族七代人的传奇故事，魔幻现实主义文学的里程碑。'),
(10, '9787030226259', '时间简史', '史蒂芬·霍金', '湖南科学技术出版社', '2010-04-01', 4, 45.00, 2, 2, 210, '宇宙学,黑洞,物理', '从大爆炸到黑洞，介绍宇宙的起源、结构与命运。'),
(11, '9787111607649', '设计模式', 'Erich Gamma', '机械工业出版社', '2019-03-01', 1, 99.00, 2, 2, 396, '面向对象,软件设计', '二十三种经典设计模式的权威阐述，面向对象设计的必读之作。'),
(12, '9787108063106', '万历十五年', '黄仁宇', '生活·读书·新知三联书店', '2018-01-01', 3, 52.00, 3, 3, 320, '明史,大历史观', '以1587年为切入点，剖析明代政治、社会与文化的深层结构。');

INSERT INTO borrow_record (record_id, reader_id, book_id, borrow_date, due_date, return_date, renew_count, status) VALUES
(1, 1, 1, NOW() - INTERVAL 10 DAY, CURDATE() + INTERVAL 20 DAY, NULL, 0, 'borrowed'),
(2, 1, 5, NOW() - INTERVAL 40 DAY, CURDATE() - INTERVAL 10 DAY, NULL, 0, 'borrowed'),
(3, 2, 3, NOW() - INTERVAL 5 DAY,  CURDATE() + INTERVAL 25 DAY, NULL, 0, 'borrowed'),
(4, 2, 7, NOW() - INTERVAL 8 DAY,  CURDATE() + INTERVAL 22 DAY, NULL, 1, 'borrowed'),
(5, 4, 7, NOW() - INTERVAL 3 DAY,  CURDATE() + INTERVAL 27 DAY, NULL, 0, 'borrowed'),
(6, 2, 9, NOW() - INTERVAL 60 DAY, CURDATE() - INTERVAL 30 DAY, NOW() - INTERVAL 35 DAY, 0, 'returned'),
(7, 4, 4, NOW() - INTERVAL 45 DAY, CURDATE() - INTERVAL 15 DAY, NOW() - INTERVAL 16 DAY, 0, 'returned');

INSERT INTO reservation (reservation_id, reader_id, book_id, reserve_date, status, note) VALUES
(1, 3, 7, NOW() - INTERVAL 2 DAY, 'pending', '等待归还后通知'),
(2, 1, 7, NOW() - INTERVAL 20 DAY, 'cancelled', '读者主动取消');

INSERT INTO favorite (reader_id, book_id) VALUES
(1, 1), (1, 4), (2, 7), (3, 9);

INSERT INTO message (recipient_type, recipient_id, title, content, is_read, created_at) VALUES
('reader', 1, '图书逾期提醒', '您借阅的《史记》已逾期 10 天，请尽快归还，逾期每天将产生 0.50 元罚金。', 0, NOW() - INTERVAL 1 DAY),
('reader', 1, '借阅成功', '您已成功借阅《深入理解计算机系统》，请在 20 天内归还。', 1, NOW() - INTERVAL 10 DAY),
('reader', 3, '预约登记成功', '您已成功预约《算法导论》，图书归还后将第一时间通知您。', 0, NOW() - INTERVAL 2 DAY),
('admin',  1, '逾期统计更新', '当前共有 1 条借阅记录逾期，请及时处理。', 0, NOW() - INTERVAL 1 DAY);

INSERT INTO system_config (config_key, config_value, description) VALUES
('LIBRARY_NAME', '中山大学图书馆', '系统显示名称'),
('BORROW_DAYS', '30', '默认借阅天数'),
('MAX_RENEW_COUNT', '1', '最大续借次数'),
('RESERVATION_HOLD_DAYS', '3', '预约到书保留天数'),
('FINE_PER_DAY', '0.50', '逾期每天罚金（元）');

INSERT INTO operation_log (admin_id, action, detail, created_at) VALUES
(1, '系统初始化', '创建数据库与初始书目数据', NOW() - INTERVAL 1 DAY);

-- 初始库存与借阅记录保持一致
UPDATE book b SET b.available_copies = b.total_copies -
    (SELECT COUNT(*) FROM borrow_record r WHERE r.book_id = b.book_id AND r.status = 'borrowed');
