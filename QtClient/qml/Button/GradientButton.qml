// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle {
    id: button
    signal clicked
    property alias text: btnText.text
    property alias font: btnText.font
    property alias textColor: btnText.color
    property color c1: Qt.rgba(0.95,0.95,0.95, 1)

    width: 150
    height: 70

    gradient: onn

    Gradient {
        id: onn
        GradientStop { position: 0.5; color: c1 }
        GradientStop { position: 1;   color: Qt.darker(c1, 2) }
    }
    Gradient {
        id: off
        GradientStop { position: 0.5; color: Qt.darker(c1, 2) }
        GradientStop { position: 1;   color: Qt.darker(c1, 2.5) }
    }

    border.width: 1
    border.color: "#666666"

    Text {
        id:btnText
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        color:"black"
        text: "text"
    }

    MouseArea {
            id: mouseArea
            anchors.fill: parent

            onClicked:  {
                button.clicked();
            }

            onEntered:{
                button.gradient=off
            }

            onCanceled:{
                button.gradient=onn
            }

            onExited: {
                button.gradient=onn
            }
        }
}
