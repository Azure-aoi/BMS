#pragma once

#include <QString>
#include <utility>

struct ServiceResult
{
    bool succeeded = false;
    QString message;

    bool ok() const { return succeeded; }

    static ServiceResult success(QString text = QString())
    {
        return {true, std::move(text)};
    }

    static ServiceResult failure(QString text)
    {
        return {false, std::move(text)};
    }
};
