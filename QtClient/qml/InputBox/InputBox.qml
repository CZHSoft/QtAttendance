// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle
{
    id: page
    width: parent.width; height: 36
    color: "#7bffffff"
    radius:5

    property alias text : search.text

    ShadowRectangle {
        color: "#434343"
        transformOrigin: "Center"
        opacity: 0.97
        visible: true
        anchors.centerIn: parent;
        width: parent.width;
        height: 36

    }
    TextBox {
        id: search;
        visible: true
        opacity: 1
        anchors.centerIn: parent
    }
}
