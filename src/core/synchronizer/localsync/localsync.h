#ifndef LOCALSYNC_H
#define LOCALSYNC_H
#include "synchronizer/isynchronizer.h"
#include "global.h"

namespace vnotex
{
    class LocalSync : public ISynchronizer
    {
    public:
        LocalSync(const QString &name);
        ~LocalSync();

        QSharedPointer<SynchronizerItem> toSynchronizerItem() const override;

        void setDataByLayout(ISynchronizerLayout *layout) override;
    };
}


#endif // LOCALSYNC_H
