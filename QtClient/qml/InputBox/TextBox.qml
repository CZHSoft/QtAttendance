// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
import "../JavaScript/myJavaScript.js" as MyScript

FocusScope {
    id: focusScope
    width: parent.width
    height: 30
    focus:true

    property alias text : textInput.text

    BorderImage
    {
        source: "../../images/lineedit-bg.png"
        width: parent.width; height: parent.height
        border { left: 4; top: 4; right: 4; bottom: 4 }
    }

    Text {
        id: typeSomething
        anchors.fill: parent; anchors.leftMargin: 8
        verticalAlignment: Text.AlignVCenter

        text:"\u8BF7\u8F93\u5165\u67E5\u8BE2\u4FE1\u606F" //utf
        color: "gray"
        font: qsTr("宋体")
//        font.pointSize: 24
    }

    MouseArea
    {
        anchors.fill: parent
        onClicked:
        {
            focusScope.focus = false;
        }
    }

    TextInput
    {
        id: textInput
        anchors
        {
            left: parent.left;
            leftMargin: 8;
            right: clearButton.left;
            rightMargin: 8;
            verticalCenter: parent.verticalCenter
        }
        focus: true
        font.pixelSize:20
    }


    //clean
    Image
    {
        id: clearButton

        anchors
        {
            right: parent.right;
            rightMargin: width;
            verticalCenter: parent.verticalCenter
        }
        source: "../../images/clear.png"
        opacity: 0

        MouseArea
        {
            anchors.fill: parent
            onClicked:
            {
                textInput.text = '';
                focusScope.focus = true;
                textInput.openSoftwareInputPanel();
            }
        }
    }

    //ok
    Image
    {
        id: okButton
        anchors
        {
            right: parent.right;
            rightMargin: 0;
            verticalCenter: parent.verticalCenter
        }
        source: "../../images/ok.png"
        opacity: 0

        MouseArea
        {
            anchors.fill: parent
            onClicked:
            {
                MyScript.win7_startBar_appPDBox_Enter(textInput.text)
            }
        }
    }


    states: State
    {
        name: "hasText";
        when: textInput.text != ''
        PropertyChanges { target: typeSomething; opacity: 0 }
        PropertyChanges { target: clearButton; opacity: 1 }
        PropertyChanges { target: okButton; opacity: 1 }
    }

    transitions: [
        Transition {
            from: ""; to: "hasText"
            NumberAnimation { exclude: typeSomething; properties: "opacity" }
        },
        Transition {
            from: "hasText"; to: ""
            NumberAnimation { properties: "opacity" }
        }
    ]
}
