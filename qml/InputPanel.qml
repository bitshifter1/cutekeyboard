import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    id: root
    visible: false
    width: 800
    height: 300

    Rectangle {
        anchors.fill: parent
        color: "lightgray"

        GridLayout {
            anchors.centerIn: parent
            columns: 10

            Repeater {
                model: ["1","2","3","4","5","6","7","8","9","0"]
                Button {
                    text: modelData
                    onClicked: {
                        Qt.inputMethod.commit(text) // send text to focused field
                    }
                }
            }
        }
    }

    Component.onCompleted: {
        root.visible = true
    }
}
