<?php 

include 'koneksi.php';
 
$id = $_GET['id'];
 
 

$sql = mysqli_query($link,"DELETE FROM content WHERE id='$id'");
 
if($sql){
	header("location: tampildata1.php");	
} else {
	mysql_error($sql);
}

 
?>