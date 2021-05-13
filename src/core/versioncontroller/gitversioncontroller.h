#ifndef GITVERSIONCONTROLLER_H
#define GITVERSIONCONTROLLER_H
#include "iversioncontroller.h"
#include <global.h>

namespace vnotex {
    class GitVersionController : public IVersionController
    {
        Q_OBJECT
    public:
        explicit GitVersionController(const QString &p_name,
                                        const QString &p_displayName,
                                        const QString &p_description,
                                        QObject *p_parent = nullptr);
        QString getName() const override;
        QString getDescription() const override;
        QString getDisplayName() const override;
    private:
        Info m_info;
    };
}


#endif // GITVERSIONCONTROLLER_H
