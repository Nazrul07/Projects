<?php
    $connection = mysqli_connect('localhost', 'root' ,'', 'form list');
    /// or include 'filenames.php'
    $id = $_GET['id'];
    //print_r('ID: '.$id);
    if ($id !== null)
    {
        $Query = mysqli_query($connection, "SELECT * FROM registration WHERE id = '$id'");
        //echo "<pre>";
        //print_r($Query);
        //var_dump($Query); /// Will return boolean and answer
        $row = mysqli_fetch_row($Query);
        //echo "<pre>";
        //print_r($row); /// Full data of the array
        // echo 'Current Data' . "\n\n";
        // echo 'First Name : ' . $row[1] . "\n";
        // echo 'Second Name: ' . $row[2] . "\n";
        // echo 'ID         : ' . $row[3] . "\n";
        // echo 'Department : ' . $row[4] . "\n";
        // echo 'Section    : ' . $row[5] . "\n";
    }
    echo '<strong><big>Current Data</big></strong>';
    if(isset($_POST['update']))
    {
        $First_Name = $_POST['FirstName'];
        $Second_Name = $_POST['SecondName'];
        $ID = $_POST['ID'];
        $Department = $_POST['Department'];
        $Section = $_POST['Section'];

        $result = mysqli_query($connection, "UPDATE registration set FirstName='$First_Name', SecondName='$Second_Name', ID='$ID', Department='$Department', Section='$Section' WHERE ID='$id' ");

        if($result)
        {
            echo "Data Has Been Updated Successfully";
            // Redirect to Form.php after updating data
            header("Location: index.php");
            exit();
        }
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edit Page</title>
</head>
<body>
    <form action="" method="post">
        <table>
            <tr>
                <td>First Name</td>
                <td> <input name="FirstName" name="" id="FirstName" value=" <?php echo $row[1]?>" ></td>
            </tr>

            <tr>
                <td>Second Name</td>
                <td> <input name="SecondName" name="" id="SecondName" value=" <?php echo $row[2]?>" ></td>
            </tr>

            <tr>
                <td>ID</td> 
                <td> <input name="ID" id="ID" value=" <?php echo $row[3]?>" > </td>
            </tr>

            <tr>
                <td>Department</td>
                <td>
                    <select name="Department" id="Department">
                        <option> <?php echo $row[4]?> </option>
                        <option value="CSE">CSE</option>
                        <option value="CCE">CCE</option>
                        <option value="EEE">EEE</option>
                        <option value="ETE">ETE</option>
                    </select>
                </td>
            </tr>

            <tr>
                <td>Section</td>
                <td> <input name="Section" id="Section" value=" <?php echo $row[5]?>" > </td>
            </tr>

            <tr>
                <td></td>
                <td> <input type="submit" name="update" value="Update" onclick="return confirm('Are you sure you want to save the changes?')"> </td>
            </tr>
        </table>
    </form>
</body>
</html>
