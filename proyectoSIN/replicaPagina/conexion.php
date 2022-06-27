<?php

$dbhost = "localhost";
$dbuser = "id19142325_plataforma_admin000";
$dbpass = "";
$dbname = "id19142325_plataforma_db";

$conn = mysqli_connect($dbhost,$dbuser,$dbpass,$dbname);

if($conn){
	echo "todo correcto";
}
if(!$conn)
{
	die("No hay conexion:" .mysqli_connect_error());
}
?>