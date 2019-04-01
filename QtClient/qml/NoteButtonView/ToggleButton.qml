// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle {
    id: toggleButton

    property url offImageSource: ""
    property url onImageSource: ""
    property alias imageSource: buttonImage.source

    signal selected()
    signal pushed()

    color: "transparent"
    state: "unPressed"
    onStateChanged:
    {
        if (state == "pressed") {
            selected()
        }
    }

    Image {
        id: buttonImage

        smooth: true
        anchors.fill: parent
    }
    MouseArea {
        id: mouseArea

        anchors.fill: parent
        onPressed: {
            if (parent.state == "unPressed") {
                pushed()
            }
        }
    }

    states: [
        State {
            name: "pressed"
            PropertyChanges {
                target: toggleButton
                scale: 0.95
                imageSource: onImageSource
            }
        },
        State {
            name: "unPressed"
            PropertyChanges {
                target: toggleButton
                scale: 1/0.95
                imageSource: offImageSource
            }
        }
    ]

    transitions: [
        Transition {
            from: "unPressed"
            to: "pressed"
            reversible: true
            PropertyAnimation {
                target: toggleButton
                properties: "scale"
                duration: 100
            }
        }
    ]
}

