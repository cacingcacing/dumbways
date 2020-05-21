<?php 

include 'koneksi.php';
 
$id = $_GET['id'];
 
 

$sql = mysqli_query($link,"DELETE FROM course WHERE id='$id'");
 
if($sql){
	header("location: tampildata.php");	
} else {
	mysql_error($sql);
}

 
?>