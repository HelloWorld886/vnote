#ifndef ISYNCHRONIZER_H
#define ISYNCHRONIZER_H
#include <QString>
#include <QSharedPointer>
#include "synchronizer/synchronizeritem.h"

namespace vnotex
{
    class ISynchronizer
    {
    public:
        explicit ISynchronizer(){}
        virtual ~ISynchronizer(){}

        virtual QString getName() const = 0;

        virtual QString getDisplayName() const = 0;

        virtual QString getDescription() const = 0;

        virtual SynchronizerItem toSynchronizerItem() const = 0;
    };
}

#endif // ISYNCHRONIZER_H
