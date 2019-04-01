// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

BorderImage
{
    id: inputButton

    property url offImageSource: ""
    property url onImageSource: ""

    signal clicked

    source: buttonarea.pressed ? onImageSource : offImageSource

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
