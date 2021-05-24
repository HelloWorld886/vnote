#ifndef GITSYNC_H
#define GITSYNC_H
#include "synchronizer/isynchronizer.h"

namespace vnotex
{
    class GitSync : ISynchronizer
    {
    public:
        GitSync(const QString &name);

         QSharedPointer<SynchronizerItem> toSynchronizerItem() const override;

        void setDataByLayout(ISynchronizerLayout *layout) override;

    private:
        QString m_url;
        QString m_token;
    };
}



#endif // GITSYNC_H
