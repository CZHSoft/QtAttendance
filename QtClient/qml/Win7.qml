// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
//import "NoteButtonView"
import "InputBox"
//import "InputBar"
import "InputPanel"
import "Clock"
import "./JavaScript/myJavaScript.js" as MyScript

Rectangle
{
    id:appWindow
    width: 480 //1024
    height: 272 //768

    property int flag: 0
    signal noteButtonViewSelected(string note)

    signal refreshData()

    color: "#add8e6"
    opacity: 0.8

    border.color: "#f5dd20"
    border.width: 1

    //Desk
    Rectangle
    {
        id:mainDesk
        width:480
        height:236
        anchors.left: parent.left
        anchors.top:parent.top

        gradient: Gradient {
            GradientStop {
                position: 0.00;
                color: "#ffffff";
            }
            GradientStop {
                position: 0.48;
                color: "#add8e6";
            }
            GradientStop {
                position: 1.00;
                color: "#ffffff";
            }
        }

        Image
        {
            id: attendanceImage
            anchors.left: parent.left
            anchors.leftMargin: 18
            anchors.verticalCenter: parent.verticalCenter
            width: 133
            height: 200
            source: myData.photo

            MouseArea
            {
                anchors.fill: parent

                onClicked:
                {
                    refreshData()
                    MyScript.save_LTAM_Data()
                }

            }
        }

        Clock
        {
            shift: 8
            anchors.right: parent.right
            anchors.rightMargin: 0
            anchors.top: parent.top
            anchors.topMargin: 15

        }

//        FlipableCard
//        {

//            id:imagePhoto
//            width: 200
//            height: 200
//            x:300
//            y:0
//            anchors.verticalCenter: parent.verticalCenter
//            image: myData.photo
//            angle: 180;
//            yAxis: 1
//            onImageChanged:
//            {
//                if(!imagePhoto.flipped)
//                {
//                    imagePhoto.bimage= imagePhoto.image
//                }

//                console.log(imagePhoto.flipped)
//                imagePhoto.flipped=!imagePhoto.flipped
//            }
//        }


        Text
        {
            id: attendanceText
            text:  "用户名："+myData.name
            anchors.left: attendanceImage.right
            anchors.leftMargin: 15
            y:attendanceImage.y
            font: qsTr("宋体")
//            font.pointSize: 24
        }

    }



    //InputBox
    Rectangle
    {
        id:mainInputer
        width:480
        height:236
        anchors.left: parent.left
        anchors.top:parent.top
        opacity: 0

        InputPanelView
        {
            id:appInputView
            anchors.fill: parent
            gradient: Gradient {
                GradientStop {
                    position: 0.00;
                    color: "#ffffff";
                }
                GradientStop {
                    position: 0.48;
                    color: "#add8e6";
                }
                GradientStop {
                    position: 1.00;
                    color: "#ffffff";
                }
            }
        }
    }


    //StartBar
    Rectangle
    {
        id: startBar
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        height: 36
        width: parent.width
        color: "#8194AA"
        border.color: "white"
        border.width: 1
        state: "ReturnRight"
        Column
        {
            Image
            {
                id: startButton
                x: startBar.width-parent.width
                y:0
                source:"../images/start.png"
                opacity: 1
                MouseArea{
                    anchors.fill: parent
                    hoverEnabled: true
                    onEntered:  {
                        highlights.opacity=1
                    }
                    onExited:
                    {
                        highlights.opacity=0
                    }
                    onClicked:
                    {
                        MyScript.win7_startBar_startButton_click()
                    }
                }
            }



            Image
            {
                id: highlights
                anchors.fill: startButton
                source:"../images/start_highlight.png"
                opacity:0
                Behavior on opacity
                {
                    NumberAnimation{duration:1000}
                }
            }
        }


        InputBox
        {
            id:appPWBox
            anchors
            {
                left: parent.left;
                right: parent.right;
                leftMargin: startButton.width+10;
                rightMargin: 10
                verticalCenter: parent.verticalCenter
            }
             opacity:0
        }

        states:
            [
            State
            {
                name: "GoLeft"
                PropertyChanges
                {
                    target: startButton;
                    x: 0
                }
                PropertyChanges
                {
                    target: appPWBox
                    opacity:1
                }
            },
            State
            {
                name: "ReturnRight"
                PropertyChanges
                {
                    target: startButton
                    x: startBar.width-startButton.width
                }
                PropertyChanges
                {
                    target: appPWBox
                    opacity:0
                }
            },
            State
            {
                name:"ListShow"
                PropertyChanges
                {
                    target: startButton;
                    x: 0
                }
                PropertyChanges
                {
                    target: appPWBox
                    opacity:0

                }
            }

        ]

        transitions: Transition {
            NumberAnimation
            {
                properties: "x";
                easing.type: Easing.InOutQuad
                duration: 50
            }
        }

    }

    //StratMenuList
    Rectangle
    {
        id: startMenu
        anchors.bottom: startBar.top
        anchors.left: parent.left
        width: 450 //450
        height: 236 //600
        radius: 6
        border.color: "black"
        border.width: 1
        opacity: 0
        Behavior on opacity
        {
            NumberAnimation{duration: 500}
        }

        gradient: Gradient
        {
            GradientStop{position: 0.0; color: "#8DA2B9"}
            GradientStop{position: 0.2; color: "#454F5B"}
            GradientStop{position: 0.5; color: "#343B44"}
            GradientStop{position: 0.8; color: "#454F5B"}
            GradientStop{position: 1.0; color: "#8DA2B9"}
        }
        Rectangle
        {
            id: menuItems
            anchors.left: parent.left
            anchors.top:parent.top
            anchors.bottom: parent.bottom
            anchors.margins: 6
            radius: 6
            width: 280
            border.color: "darkblue"
            border.width: 1
            color: "white"

            Component
            {
                id: menuDelegate
                Item
                {
                    width: parent.width; height: 40
                    Row
                    {
                        spacing: 14
                        Image
                        {
                            source: icon
                            width:38;
                            height:38
                        }
                        Text
                        {
                            id:menuDelegateText
                            text: name
                            font.pixelSize: 14
                            anchors.verticalCenter: parent.verticalCenter;
                            anchors.leftMargin: 15
                        }
                    }

                    MouseArea
                    {
                        anchors.fill: parent
                        onClicked:
                        {
                            mainListView.currentIndex=index
                        }
                        onDoubleClicked:
                        {
                            //do somgthing
                            console.log("import")
                            startMenu.opacity=0
                            mainDesk.opacity=1
                            startBar.state="ReturnRight"
                        }
                    }
                }
            }

            Component
            {
                id: listDelegate
                Item
                {
                    width: parent.width;
                    height: 32
                    Text
                    {
                        text: name;
                        color: "lightgray";
                        font.pixelSize: 12;
                        anchors.verticalCenter: parent.verticalCenter;
                        anchors.leftMargin: 15
                    }
                }
            }

            ListView
            {
                id:mainListView
                anchors.margins: 4
                anchors.fill: parent
                model: Win7Model{}
//                model: myModel
                delegate: menuDelegate
                highlight: Rectangle
                {
                    color: "lightblue";
                    radius: 3;
                    border.color: "black";
                    border.width:1

                    Image{
                        anchors.right: parent.right
                        source: "../images/arrow.png"
                        width: 20; height:20
                        anchors.verticalCenter: parent.verticalCenter
                    }
                }
                highlightMoveSpeed:1200
                focus: true
                clip:true
            }
            ScrollBar
            {
                scrollArea: mainListView;
                height: mainListView.height;
                width: 5
                anchors.right: mainListView.right
            }
        }

        Image
        {
            x: 320
            y: 0
            width: 64;height:64
            id: showPicture
            source: "../images/Users.png"
        }
        ListView
        {
            anchors.left: menuItems.right
            anchors.top:showPicture.bottom
            anchors.bottom: parent.bottom
            anchors.right: parent.right
            anchors.margins: 16
            model: Win7Model{}
            delegate: listDelegate
        }
    }



}
