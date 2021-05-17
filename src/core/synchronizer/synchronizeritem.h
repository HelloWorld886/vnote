#ifndef SYNCHRONIZERITEM_H
#define SYNCHRONIZERITEM_H
#include <QString>
#include <QJsonObject>

namespace vnotex
{
    // session config item
    struct SynchronizerItem
    {
        bool operator==(const SynchronizerItem &p_other) const;

        virtual void fromJson(const QJsonObject &p_jobj);

        virtual QJsonObject toJson() const;

        QString m_name;

    };
}


#endif // SYNCHRONIZERITEM_H
