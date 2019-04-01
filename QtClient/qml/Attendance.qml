// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle {
    width: 480
    height: 272

    Image
    {
        id: attendanceImage
        x:5
        y:5
        width: 120
        height: 240
        source: myData.photo

        MouseArea
        {
            anchors.fill: parent
            onClicked:
                console.log(parent.source)
        }

    }

    Text
    {
        id: attendanceText
        text: "用户名："+myData.name

        anchors.left: attendanceImage.right
        anchors.leftMargin: 50
        y:attendanceImage.y

    }
}
