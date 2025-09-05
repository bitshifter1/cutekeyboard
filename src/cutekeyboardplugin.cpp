#include "cutekeyboardplugin.h"
#include "cutekeyboardinputcontext.h"

QPlatformInputContext *CuteKeyboardPlugin::create(const QString &key, const QStringList &paramList)
{
    if (key.compare("cutekeyboard", Qt::CaseInsensitive) == 0)
        return new CuteKeyboardInputContext();
    return nullptr;
}
