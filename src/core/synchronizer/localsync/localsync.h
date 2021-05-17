#ifndef LOCALSYNC_H
#define LOCALSYNC_H
#include "synchronizer/isynchronizer.h"
#include "global.h"

namespace vnotex
{
    class LocalSync : public ISynchronizer
    {
    public:
        LocalSync(const QString &p_name,
                  const QString &p_displayName,
                  const QString &p_description);
        ~LocalSync();

        QString getName() const override;

        QString getDescription() const override;

        QString getDisplayName() const override;

        SynchronizerItem toSynchronizerItem() const override;

    private:
        Info m_info;
    };
}


#endif // LOCALSYNC_H
