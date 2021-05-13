#ifndef IVERSIONCONTROLLERFACTORY_H
#define IVERSIONCONTROLLERFACTORY_H

#include <QSharedPointer>
#include "sessionconfig.h"
class QFormLayout;

namespace vnotex
{
    class IVersionController;

    class IVersionControllerFactory
    {
    public:
        IVersionControllerFactory()
        {
        }

        virtual ~IVersionControllerFactory()
        {
        }

        virtual QString getName() const = 0;

        virtual QString getDisplayName() const = 0;

        virtual QString getDescription() const = 0;

        // ui
        virtual void setupNotebookInfoUI(QFormLayout *mainLayout, QWidget *p_parent = nullptr) = 0;

        virtual QSharedPointer<IVersionController> createVersionController() = 0;

        virtual SessionConfig::VersionControlItem createVersionControlItem() = 0;
    };
} // ns vnotex

#endif // IVERSIONCONTROLLERFACTORY_H
