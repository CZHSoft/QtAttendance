SOURCES += \
    main.cpp \
    DataObject.cpp \
    GetData.cpp \
    gsoap/soapC.cpp \
    gsoap/soapClient.cpp \
    gsoap/stdsoap2.cpp \
    RefreshData.cpp \
    SoapControl.cpp \
    qextserialport/qextserialbase.cpp \
    qextserialport/posix_qextserialport.cpp \
    SerialPortControl.cpp

OTHER_FILES += \
    Main.qml \
    Win7.qml \
    ScrollBar.qml \
    InputBox.qml \
    ShadowRectangle.qml \
    TextBox.qml \
    PanelButton.qml \
    GradientButton.qml \
    NoteButtonView.qml \
    ToggleButton.qml \
    NotesModel.qml \
    qml/ScrollBar.qml \
    qml/Main.qml \
    qml/Attendance.qml \
    qml/Win7.qml \
    qml/NoteButtonView/NotesModel.qml \
    qml/NoteButtonView/NoteButtonView.qml \
    qml/NoteButtonView/ToggleButton.qml \
    qml/InputBox/ShadowRectangle.qml \
    qml/InputBox/InputBox.qml \
    qml/InputBox/TextBox.qml \
    qml/Button/GradientButton.qml \
    qml/Button/PanelButton.qml \
    images/lineedit-bg.png \
    images/clear.png \
    images/shadow.png \
    images/Users.png \
    images/start_highlight.png \
    images/start.png \
    images/arrow.png \
    images/big_a.png \
    images/big_b.png \
    images/big_d.png \
    images/big_e.png \
    images/big_g.png \
    images/glowing_a.png \
    images/glowing_b.png \
    images/glowing_d.png \
    images/glowing_e.png \
    images/glowing_g.png \
    images/scrollbar.png \
    images/tuner_a.png \
    images/tuner_a_on.png \
    images/tuner_auto.png \
    images/tuner_auto_on.png \
    images/tuner_b.png \
    images/tuner_b_on.png \
    images/tuner_d.png \
    images/tuner_d_on.png \
    images/tuner_e.png \
    images/tuner_e_on.png \
    images/tuner_g.png \
    images/tuner_g_on.png \
    images/voicemode_off.png \
    images/voicemode_on.png \
    images/button.png \
    images/button_pressed.png \
    pic/Phone.png \
    pic/Calendar.png \
    pic/IE.png \
    pic/Software.png \
    pic/Security.png \
    pic/Flag.png \
    pic/Speaker.png \
    pic/Audio.png \
    pic/Favorite.png \
    pic/Contacts.png \
    pic/Notes.png \
    pic/Idea.png \
    pic/Globe.png \
    pic/Zipper.png \
    pic/MyComputer.png \
    pic/Games.png \
    pic/Entertainment.png \
    pic/Camera.png \
    pic/Champion.png \
    qml/Win7Model.qml \
    qml/InputBar/Button.qml \
    qml/InputBar/InputBar.qml \
    qml/JavaScript/myJavaScript.js \
    qml/InputPanel/ButtonsModel.qml \
    qml/InputPanel/InputButton.qml \
    qml/InputPanel/InputPanelView.qml \
    qml/FlipableCard.qml \
    qml/Clock/Clock.qml

QT+= declarative network sql

HEADERS += \
    DataObiect.h \
    GetData.h \
    gsoap/stdsoap2.h \
    gsoap/soapStub.h \
    gsoap/soapH.h \
    gsoap/soapBasicHttpBinding_USCOREIServiceProxy.h \
    gsoap/BasicHttpBinding_USCOREIService.nsmap \
    RefreshData.h \
    SoapControl.h \
    qextserialport/posix_qextserialport.h \
    qextserialport/qextserialbase.h \
    SerialPortControl.h