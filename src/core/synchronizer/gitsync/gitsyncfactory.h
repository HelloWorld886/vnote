#ifndef GITSYNCFACTORY_H
#define GITSYNCFACTORY_H
#include "synchronizer/isynchronizerfactory.h"

namespace vnotex
{
    class GitSyncFactory : public ISynchronizerFactory
    {
    public:
        GitSyncFactory();
        virtual ~GitSyncFactory();

        QSharedPointer<SynchronizerItem> createEmptySynchronzerItem() const override;

        QSharedPointer<ISynchronizer> createSynchronizer() const override;

        ISynchronizerLayout * createSynchronizerLayout(QWidget *p_parent) const override;

        QString getName() const override;
        QString getDescription() const override;
        QString getDisplayName() const override;
    };
}


#endif // GITSYNCFACTORY_H
