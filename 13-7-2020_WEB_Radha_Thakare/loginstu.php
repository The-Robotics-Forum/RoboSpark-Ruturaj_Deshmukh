<?php
session_start();
include('db.php');
if(isset($_POST['submit']))
{
    $stud_id= $_POST['stud_id'];
    //echo $stud_id;
    

    $query = "SELECT * FROM `student` WHERE `stud_id`='$stud_id'  ";
    
    $run = mysqli_query($con, $query);
    $row= mysqli_num_rows($run);

    if($row==1)
    {
        
        $stud_row= mysqli_fetch_assoc($run);   //fetching values
        
        $_SESSION['stud_id'] = $stud_id;
        $stud_name = $stud_row['stud_name'];
        $stud_branch = $stud_row['stud_branch'];
        $stud_cgpa= $stud_row['stud_cgpa'];
       $_SESSION['stud_name'] = $stud_name;
       $_SESSION['stud_branch'] = $stud_branch;
       $_SESSION['stud_cgpa'] = $stud_cgpa;
       
        echo $_SESSION['stud_id']." /n";
        echo $_SESSION['stud_name']."/n";
        echo $_SESSION['stud_branch']."/n "; 
        echo $_SESSION['stud_cgpa']."/n ";
        
        ?>
        <html lang="en">
    <head>
        <meta charset="UTF-8"/>
        <title>REQUIRED DETAILS</title>
        <link rel="stylesheet" href="loginstu.css">
    </head>
    <body>
        <form  class="login-box">
            <h1>Student details</h1>
            <div class="info_box">
                
    
                    <h3><?php  $stud_id; ?></h3>
                    <h3>NAME: <?php echo $stud_name;?></h3>
                    <h3>BRANCH: <?php echo $stud_branch;?></h3>
                    <h3>CGPA: <?php echo $stud_cgpa;?></h3>
                
        </form>
    </body>
</html>
			<?php
    }

    else
    {
        echo "Login Unsuccessful";
    }


}
?>


                
                
