<?php
    $connection = mysqli_connect('localhost', 'root' ,'', 'form list');
    if(isset($_POST['delete']))
    {
        $id = $_POST['id']; // Retrieve the ID from the form
        $Query = mysqli_query($connection, "DELETE FROM registration WHERE ID='$id'");
        if($Query)
        {
            echo 'Data has been successfully deleted!' . "\n";
            header("Location: table.php");
            exit();
        }
    }
?>
