// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

ListModel {
    ListElement {
        note: "E"
        offSource: "../../images/temp/tuner_e.png"
        onSource: "../../images/temp/tuner_e_on.png"
        bigSource: "../../images/big_e.png"
        glowSource: "../../images/glowing_e.png"
        frequency: "82.407"
        interval: "5"
    }
    ListElement {
        note: "A"
        offSource: "../../images/temp/tuner_a.png"
        onSource: "../../images/temp/tuner_a_on.png"
        bigSource: "../../mycomponents/images/big_a.png"
        glowSource: "../../mycomponents/images/glowing_a.png"
        frequency: "110.00"
        interval: "5"
    }
    ListElement {
        note: "D"
        offSource: "../../images/temp/tuner_d.png"
        onSource: "../../images/temp/tuner_d_on.png"
        bigSource: "../../mycomponents/images/big_d.png"
        glowSource: "../../mycomponents/images/glowing_d.png"
        frequency: "146.83"
        interval: "5"
    }
    ListElement {
        note: "G"
        offSource: "../../images/temp/tuner_g.png"
        onSource: "../../images/temp/tuner_g_on.png"
        bigSource: "../../mycomponents/images/big_g.png"
        glowSource: "../../mycomponents/images/glowing_g.png"
        frequency: "196.00"
        interval: "4"
    }
    ListElement {
        note: "B"
        offSource: "../../images/temp/tuner_b.png"
        onSource: "../../images/temp/tuner_b_on.png"
        bigSource: "../../mycomponents/images/big_b.png"
        glowSource: "../../mycomponents/images/glowing_b.png"
        frequency: "246.94"
        interval: "5"
    }
    ListElement {
        note: "e"
        offSource: "../../images/temp/tuner_e.png"
        onSource: "../../images/temp/tuner_e_on.png"
        bigSource: "../../mycomponents/images/big_e.png"
        glowSource: "../../mycomponents/images/glowing_e.png"
        frequency: "329.63"
        interval: "9999" //Big enough that we can't move over this note
    }
    ListElement {
        note: "Auto"
        offSource: "../../images/temp/tuner_auto.png"
        onSource: "../../images/temp/tuner_auto_on.png"
        frequency: "82.407"
    }
}
