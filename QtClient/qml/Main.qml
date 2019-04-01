// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle
{
    id:appWindow
    width: 480
    height: 272

    signal clicked

    MouseArea
    {
        anchors.fill: parent
        onClicked:
            appWindow.clicked()
    }

    onClicked:
    {
        console.log("test:"+Qt.formatDateTime(new Date(),"yyyy-MM-dd hh:mm:ss"))
    }

    ListView
    {
        width: 480; height: 200
        anchors.fill: parent

        model: myModel

        delegate: Rectangle
        {
            height: 25
            width: 100
            color: model.modelData.color
            Text { text: model.modelData.name }

            MouseArea
            {
                anchors.fill: parent
                onDoubleClicked:
                    console.log(model.modelData.name)
            }

        }
    }

}
