<?php 

include 'koneksi.php';
 
$id = $_GET['id'];
 
 

$sql = mysqli_query($link,"DELETE FROM author WHERE id='$id'");
 
if($sql){
	header("location: tampildata2.php");	
} else {
	mysql_error($sql);
}

 
?>