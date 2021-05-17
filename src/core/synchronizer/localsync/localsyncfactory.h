#ifndef LOCALSYNCFACTORY_H
#define LOCALSYNCFACTORY_H
#include "synchronizer/isynchronizerfactory.h"

namespace vnotex {
    class LocalSyncFactory : public ISynchronizerFactory
    {
    public:
        LocalSyncFactory();
        virtual ~LocalSyncFactory();

        QSharedPointer<ISynchronizer> createSynchronizer() const override;

        SynchronizerItem createEmptySynchronzerItem() const override;

        ISynchronizerLayout *createSynchronizerLayout(QWidget *p_parent) const override;

        QString getName() const override;

        QString getDescription() const override;

        QString getDisplayName() const override;
    };
}


#endif // LOCALSYNCFACTORY_H
