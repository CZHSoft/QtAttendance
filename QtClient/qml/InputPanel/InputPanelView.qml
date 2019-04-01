// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
import "../JavaScript/myJavaScript.js" as MyScript

Rectangle
{

    width: 360
    height: 136

    Component
    {
        id: notesDelegate

        Item
        {
            width: 32;
            height: 32

            InputButton
            {
                id: noteButton

                width:32
                height: 32
                offImageSource: offSource
                onImageSource: onSource

                onClicked:
                {
                    MyScript.win7_mainInputer_appInputView_click(note)
                }
            }
        }
    }

    GridView
    {
        id: noteChooser
        anchors.fill: parent
        cellWidth: 32;
        cellHeight: 32;
        model: ButtonsModel{}
        delegate: notesDelegate
        focus: true
        anchors.topMargin: 75
        anchors.bottomMargin: 75
        anchors.leftMargin: 150
        anchors.rightMargin: 150

    }
}


