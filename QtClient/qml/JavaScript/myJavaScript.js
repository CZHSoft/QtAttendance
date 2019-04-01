
function ToggleButtonFunc(str)
{
//    if(appSearchBox.searchSelectValue)
//    {

//        console.log("1")

//    }
//    else
//    {
//        console.log("2")
//    }

//    appWindow.noteButtonViewSelected(str)


}

function win7_startBar_startButton_click()
{
    if(startBar.state=="ReturnRight")
    {
        mainDesk.opacity=0
        mainInputer.opacity=1
        startBar.state="GoLeft"
    }
    else if(startBar.state=="GoLeft")
    {
        mainDesk.opacity=1
        mainInputer.opacity=0
        startBar.state="ReturnRight"
    }
    else if(startBar.state=="ListShow")
    {
        startMenu.opacity=0
        mainDesk.opacity=1
        startBar.state="ReturnRight"
    }
}

function win7_startBar_appPDBox_Enter(str)
{
    if(str=="123456")
    {
        startBar.state="ListShow"
        startMenu.opacity=1
        appPWBox.opacity=0
        appPWBox.text=""
        mainInputer.opacity=0
    }
    else
    {
        appPWBox.text=""
    }
}

function win7_mainInputer_appInputView_click(str)
{

    appPWBox.text+=str

}


function save_LTAM_Data()
{

    var db = openDatabaseSync("LTDB", "1.0", "LT SQLITE", 50000);
    db.transaction(
        function(tx)
        {
            tx.executeSql('CREATE TABLE IF NOT EXISTS Attendance(id INTEGER primary key, recordtime DATETIME)');
            tx.executeSql('INSERT INTO Attendance VALUES(?,?)', [,Qt.formatDateTime(new Date(), "yyyyMMdd hh:mm")]);
        }
    )
    console.log("write DB end...")
}
