// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Item
{
    id: titleBar
    property string untaggedString: "Uploads from everyone"
    property string taggedString: "Recent uploads tagged "

    BorderImage
    {
        width: parent.width;
        height: parent.height + 14;
        y: -7
    }

    Item
    {
        id: container
        width: (parent.width * 2) - 55 ;
        height: parent.height

        function accept()
        {
            imageDetails.closed()
            titleBar.state = ""
            background.state = ""
            rssModel.tags = editor.text
        }

        Image
        {
            id: quitButton
            anchors.left: parent.left//; anchors.leftMargin: 0
            anchors.verticalCenter: parent.verticalCenter
            MouseArea
            {
                anchors.fill: parent
                onClicked: Qt.quit()
            }
        }

        Text
        {
            id: categoryText
            anchors
            {
                left: quitButton.right;
                right: tagButton.left;
                leftMargin: 10;
                rightMargin: 10
                verticalCenter: parent.verticalCenter
            }
            elide: Text.ElideLeft
            text: (rssModel.tags=="" ? untaggedString : taggedString + rssModel.tags)
            font.bold: true;
            font.pixelSize: 15
            color: "White";
            style: Text.Raised;
            styleColor: "Black"
        }

        Button {
            id: tagButton;
            x: titleBar.width - 50;
            width: 45;
            height: 32;
            text: "..."
            onClicked: if (titleBar.state == "Tags") container.accept(); else titleBar.state = "Tags"
            anchors.verticalCenter: parent.verticalCenter
        }

        Item
        {
            id: lineEdit
            y: 4; height: parent.height - 9
            anchors { left: tagButton.right; leftMargin: 5; right: parent.right; rightMargin: 5 }

            BorderImage {  anchors.fill: parent }

            TextInput
            {
                id: editor
                anchors
                {
                    left: parent.left;
                    right: parent.right;
                    leftMargin: 10;
                    rightMargin: 10
                    verticalCenter: parent.verticalCenter
                }
                cursorVisible: true; font.bold: true
                color: "#151515"; selectionColor: "Green"
            }

            Keys.forwardTo: [ (returnKey), (editor)]

            Item {
                id: returnKey
                Keys.onReturnPressed: container.accept()
                Keys.onEnterPressed: container.accept()
                Keys.onEscapePressed: titleBar.state = ""
            }
        }
    }

    states: State {
        name: "Tags"
        PropertyChanges { target: container; x: -tagButton.x + 5 }
        PropertyChanges { target: tagButton; text: "OK" }
        PropertyChanges { target: editor; focus: true }
    }

    transitions: Transition {
        NumberAnimation { properties: "x"; easing.type: Easing.InOutQuad }
    }
}
