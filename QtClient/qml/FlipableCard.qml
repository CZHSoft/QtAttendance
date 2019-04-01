// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Flipable
{
    id: container

    property bool flipped: true
    property alias image: frontImage.source
    property alias bimage: backImage.source
    property int xAxis: 0
    property int yAxis: 0
    property int angle: 0

    width: front.width; height: front.height

    front: Image { id: frontImage; smooth: true }
    back: Image { id:  backImage; source: "../images/no_picture.jpg" ; smooth: true }

    state: "back"

    MouseArea
    {
        anchors.fill: parent;
        onClicked:
        {
            container.flipped = !container.flipped
        }
    }

    transform: Rotation {
        id: rotation; origin.x: container.width / 2; origin.y: container.height / 2
        axis.x: container.xAxis; axis.y: container.yAxis; axis.z: 0
    }

    states: State {
        name: "back"; when: container.flipped
        PropertyChanges { target: rotation; angle: container.angle }
    }

    transitions: Transition {
        ParallelAnimation {
            NumberAnimation { target: rotation; properties: "angle"; duration: 600 }
            SequentialAnimation {
                NumberAnimation { target: container; property: "scale"; to: 0.75; duration: 300 }
                NumberAnimation { target: container; property: "scale"; to: 1.0; duration: 300 }
            }
        }
    }
}

