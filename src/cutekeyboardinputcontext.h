#pragma once
#include <qpa/qplatforminputcontext.h>
#include <QPointer>

class QQuickWindow;
class QQmlApplicationEngine;

class CuteKeyboardInputContext : public QPlatformInputContext
{
    Q_OBJECT
public:
    CuteKeyboardInputContext();
    ~CuteKeyboardInputContext() override;

    bool isValid() const override { return true; }
    void showInputPanel() override;
    void hideInputPanel() override;
    bool isInputPanelVisible() const override;

private:
    QPointer<QQuickWindow> m_window;
    QQmlApplicationEngine *m_engine = nullptr;
};
