#include "cutekeyboardinputcontext.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickWindow>
#include <QDebug>

CuteKeyboardInputContext::CuteKeyboardInputContext() {}
CuteKeyboardInputContext::~CuteKeyboardInputContext() {}

void CuteKeyboardInputContext::showInputPanel()
{
    if (!m_engine) {
        m_engine = new QQmlApplicationEngine();

        // Load InputPanel.qml from QML import path
        const QUrl url(QStringLiteral("qrc:/qml/InputPanel.qml"));
        m_engine->load(url);

        if (!m_engine->rootObjects().isEmpty()) {
            m_window = qobject_cast<QQuickWindow *>(m_engine->rootObjects().first());
            if (m_window)
                m_window->show();
        } else {
            qWarning() << "CuteKeyboard: Failed to load InputPanel.qml";
        }
    } else if (m_window) {
        m_window->show();
    }
}

void CuteKeyboardInputContext::hideInputPanel()
{
    if (m_window)
        m_window->hide();
}

bool CuteKeyboardInputContext::isInputPanelVisible() const
{
    return m_window && m_window->isVisible();
}
