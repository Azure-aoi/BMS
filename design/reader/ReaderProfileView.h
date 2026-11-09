#ifndef READERPROFILEVIEW_H
#define READERPROFILEVIEW_H

#include <QDateTime>
#include <QList>
#include <QString>
#include <QWidget>

namespace fluent::basicinput {
class Button;
class ComboBox;
}

namespace fluent::textfields {
class Label;
class LineEdit;
}

class ReaderProfileView final : public QWidget
{
public:
    explicit ReaderProfileView(QWidget *parent = nullptr);
    ~ReaderProfileView() override;

private:
    struct ReaderInfo
    {
        int readerId = 0;
        QString studentNo;
        QString name;
        QString gender;
        int categoryId = 0;
        QString categoryName;
        QString department;
        QString phone;
        QString email;
        QString address;
        QString passwordHash;
        bool isFrozen = false;
        QDateTime createdAt;
    };

    void buildUi();
    fluent::textfields::LineEdit *createField(const QString &value, bool readOnly = true);
    void toggleEditing();
    void setEditing(bool editing);
    void changePassword();
    void setFeedback(const QString &message);

    fluent::textfields::LineEdit *m_studentIdEdit = nullptr;
    fluent::textfields::LineEdit *m_nameEdit = nullptr;
    fluent::basicinput::ComboBox *m_genderEdit = nullptr;
    fluent::textfields::LineEdit *m_departmentEdit = nullptr;
    fluent::textfields::LineEdit *m_phoneEdit = nullptr;
    fluent::textfields::LineEdit *m_emailEdit = nullptr;
    fluent::textfields::LineEdit *m_addressEdit = nullptr;
    fluent::basicinput::Button *m_editProfileButton = nullptr;
    fluent::basicinput::Button *m_changePasswordButton = nullptr;
    fluent::textfields::Label *m_feedbackLabel = nullptr;
    QList<fluent::textfields::LineEdit *> m_fields;
    ReaderInfo m_profile;
    bool m_editing = false;
};

QWidget *createReaderProfileView(QWidget *parent = nullptr);

#endif // READERPROFILEVIEW_H
