// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

BorderImage
{
    signal clicked

    border
    {
        top: 10
        bottom: 10
        left: 10
        right: 10
    }

    source: buttonarea.pressed ? "../../images/button_pressed.png" : "../../images/button.png"

    MouseArea
    {
        id: buttonarea
        anchors.fill: parent
        onClicked:
        {
            parent.clicked();
        }
    }
}
