#ifndef ISYNCHRONIZERFACTORY_H
#define ISYNCHRONIZERFACTORY_H
#include <QSharedPointer>

namespace vnotex
{
    class ISynchronizer;
    class ISynchronizerLayout;
    struct SynchronizerItem;

    class ISynchronizerFactory
    {
    public:
        ISynchronizerFactory(){}
        ~ISynchronizerFactory(){}

        virtual QString getName() const = 0;

        virtual QString getDisplayName() const = 0;

        virtual QString getDescription() const = 0;

        virtual QSharedPointer<ISynchronizer> createSynchronizer() const = 0;

        virtual ISynchronizerLayout *createSynchronizerLayout(QWidget *p_parent) const = 0;

        virtual QSharedPointer<SynchronizerItem> createEmptySynchronzerItem() const = 0;
    };
}


#endif // ISYNCHRONIZERFACTORY_H
