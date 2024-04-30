<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My Form</title>
</head>
<body>
    <form action="" method="post">
        <table>
            <tr>
                <td>First Name</td>
                <td> <input name="FirstName" name="" id="FirstName"></td>
            </tr>

            <tr>
                <td>Second Name</td>
                <td> <input name="SecondName" name="" id="SecondName"></td>
            </tr>

            <tr>
                <td>ID</td> 
                <td> <input name="ID" id="ID"> </td>
            </tr>

            <tr>
                <td>Department</td>
                <td>
                    <select name="Department" id="Department">
                        <option value="CSE">CSE</option>
                        <option value="CCE">CCE</option>
                        <option value="EEE">EEE</option>
                        <option value="ETE">ETE</option>
                    </select>
                </td>
            </tr>

            <tr>
                <td>Section</td>
                <td> <input name="Section" id="Section"> </td>
            </tr>

            <tr>
                <td></td>
                <td> <input type="submit" name="save" value="Save"> </td>
            </tr>
        </table>
    </form>

    <?php
        $connection = mysqli_connect('localhost', 'root' ,'', 'form list'); /// Connecting to Host.
        if(isset($_POST['save']))
        {
            /// mysqli_connect('hostname', 'username', 'password', 'table');
            //echo "<pre>";                                                     /// New Line
            //print_r($conncetion);                                             /// Showing Host Conncetion
            $First_Name = $_POST['FirstName'];
            $Second_Name = $_POST['SecondName'];
            $ID = $_POST['ID'];
            $Department = $_POST['Department'];
            $Section = $_POST['Section'];
            
            // echo "<pre>";
            // print_r($_POST);                                                 /// Showing Stored Data in each Variables

            /// Printing Each Variables Data

            // print_r($FirstName);
            // print_r($SecondName);
            // echo "<pre>";
            // print_r($ID);
            // echo "<pre>";
            // print_r($Department);
            // echo "<pre>";
            // print_r($Section);

            ///Saving Values in Database
            $result = mysqli_query($connection, "INSERT INTO  registration(FirstName, SecondName, ID, Department, Section) values('$First_Name', '$Second_Name', '$ID', '$Department', '$Section')");
            if($result)
            {
                echo 'Data Has Been Saved Successfully' . "\n";
            }
        }
    ?>

    <p>Click <a href="table.php?FirstName=<?php echo $First_Name?>&SecondName=<?php echo $Second_Name?>&ID=<?php echo $ID?>&Department=<?php echo $Department?>&Section=<?php echo $Section?>">here</a> to see the current stored data.</p>

</body>
</html>