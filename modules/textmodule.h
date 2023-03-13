#ifndef TEXTMODULE_H
#define TEXTMODULE_H

#include <modules/module.h>

class TextModule : public IModule
{
    QString text_;
    QString title_;
public:
    TextModule(QString title = "Description", QString text = "None") : text_(text), title_(title) { }

    const void* getContent() override  { return &text_; };
    const QString getTitle() override { return title_; };
    ModuleType getType() override { return ModuleType::TEXT; };
    const QWidget getWidget() override { return QWidget(); };
};

#endif // TEXTMODULE_H
