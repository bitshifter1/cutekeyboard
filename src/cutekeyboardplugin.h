#pragma once
#include <qpa/qplatforminputcontextplugin_p.h>

class CuteKeyboardPlugin : public QPlatformInputContextPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformInputContextFactoryInterface_iid FILE "cutekeyboard.json")

public:
    QPlatformInputContext *create(const QString &key, const QStringList &paramList) override;
};
