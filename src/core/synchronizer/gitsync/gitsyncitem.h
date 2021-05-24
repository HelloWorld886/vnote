#ifndef GITSYNCITEM_H
#define GITSYNCITEM_H
#include "synchronizer/synchronizeritem.h"

namespace vnotex {
    struct GitSyncItem : public SynchronizerItem
    {
        QJsonObject toJson() const override;

        void fromJson(const QJsonObject &p_jobj) override;

        bool operator==(const GitSyncItem &p_other) const;

        QString m_url;
        QString m_token;
    };
}


#endif // GITSYNCITEM_H
