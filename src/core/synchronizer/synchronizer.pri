include($$PWD/localsync/localsync.pri)
include($$PWD/gitsync/gitsync.pri)

HEADERS += \
    $$PWD/isynchronizer.h \
    $$PWD/isynchronizerfactory.h \
    $$PWD/isynchronizerlayout.h \
    $$PWD/synchronizeritem.h

SOURCES += \
    $$PWD/synchronizeritem.cpp

