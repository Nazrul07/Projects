<?php
    // Retrieve URL parameters if they exist
    $FirstName = isset($_GET['FirstName']) ? $_GET['FirstName'] : '';
    $SecondName = isset($_GET['SecondName']) ? $_GET['SecondName'] : '';
    $ID = isset($_GET['ID']) ? $_GET['ID'] : '';
    $Department = isset($_GET['Department']) ? $_GET['Department'] : '';
    $Section = isset($_GET['Section']) ? $_GET['Section'] : '';
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Table</title>
    <style>
        .delete-cell {
            text-align: center;
        }
    </style>
</head>
<body>
    <table border="1">
        <tr>
            <th>First Name</th>
            <th>Second Name</th>
            <th>ID</th>
            <th>Department</th>
            <th>Section</th>
            <th>Edit</th>
            <th>Delete</th>
        </tr>
        <?php
        ///Connecting Database
        $connection = mysqli_connect('localhost', 'root' ,'', 'form list');

        /// Searching Data from Database
        $SelectQuery = mysqli_query($connection, "SELECT * FROM registration");

        echo '<strong><big>All the stored data.</big></strong><br><br>';

        //echo "<pre>";
        // print_r($SelectQuery);
        while ($row = mysqli_fetch_array($SelectQuery))
        {
            $id=$row['ID'];
            ?>
            <tr>
                <td><?php echo $row['FirstName'] ?></td>
                <td><?php echo $row['SecondName'] ?></td>
                <td><?php echo $row['ID'] ?></td>
                <td><?php echo $row['Department'] ?></td>
                <td><?php echo $row['Section'] ?></td>
                <td>
                    <a class="edit-link" href=" edit.php? id=<?php echo $id?> ">Edit</a>
                </td>
                <td class="delete-cell">
                    <form id="deleterow" action="delete.php" method="post">
                        <input type="hidden" name="id" value="<?php echo $id?>">
                        <button type="submit" name="delete" onclick="return confirm('Are you sure you want to delete the row?')">Delete</button>
                    </form>
                </td>
            </tr>
            <?php
        }
        ?>
    </table>
</body>
</html>

