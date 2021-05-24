#ifndef ISYNCHRONIZER_H
#define ISYNCHRONIZER_H
#include <QString>
#include <QSharedPointer>

namespace vnotex
{
    class ISynchronizerLayout;
    struct SynchronizerItem;

    class ISynchronizer
    {
    public:
        explicit ISynchronizer(const QString &name) : m_name(name){}
        virtual ~ISynchronizer(){}

        virtual QSharedPointer<SynchronizerItem> toSynchronizerItem() const = 0;

        virtual void setDataByLayout(ISynchronizerLayout *layout) = 0;

    protected:
        QString m_name;
    };
}

#endif // ISYNCHRONIZER_H
