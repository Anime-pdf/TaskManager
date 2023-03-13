#ifndef IMODULE_H
#define IMODULE_H

#include <QString>
#include <QWidget>

class IModule
{
public:
    enum ModuleType {
        TEXT = 0,
        IMAGE,
        VIDEO,
    };

    virtual const void* getContent() = 0;
    virtual const QString getTitle() = 0;
    virtual ModuleType getType() = 0;
    virtual const QWidget getWidget() = 0;
};

#endif // IMODULE_H
