// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
import "../JavaScript/myJavaScript.js" as MyScript

Rectangle
{
    width: 360
    height: 136

    GridView
    {
        id: noteChooser

        property real currentFrequency: 82.407

    //    signal noteSelected(string note, real frequency, int index)
        signal noteSelected(string note)

        //Press down the button corresponding to the given note.
        function pushButton(index) {
            currentIndex = index;
        }

    //    width: 50*model.count + spacing*(model.count-1); height: 36
    //    orientation: ListView.Horizontal
        model: NotesModel {}
        delegate: notesDelegate
        keyNavigationWraps: true
        boundsBehavior: Flickable.StopAtBounds

        Component {
            id: notesDelegate

            ToggleButton {
                id: noteButton

    //            width: height;
    //            height: noteChooser.height
                width:32
                height: 32
                offImageSource: offSource
                onImageSource: onSource
                state: noteButton.ListView.isCurrentItem ? "pressed" : "unPressed"
                onSelected:
                {
    //                noteChooser.noteSelected(note)
                    if (note != "Auto") {
                        currentFrequency = frequency
                    }
                    console.log(note)
                    MyScript.ToggleButtonFunc(note)
                }
                onPushed:
                {
//                    noteButton.ListView.view.currentIndex = index
                }
            }
        }
    }
}


