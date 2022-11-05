create table Peoples(
`First Name` varchar(225),
`Last Name` varchar(225),
Address varchar(225),
City varchar(225),
Age int);

 insert into Peoples
 (`First Name` ,`Last Name`,Address,City,Age)
 values("Mickey","Mouse","123 Fantasy Way","Anaheim",73),
       ("BAt","Man","321 Caverm Ave","Gotham",54),
       ("Wonder","Woman","987 Truth Way","Paradise",39),
       ("DOnald ","Duck","555 Quack Street","Mallard",65),
	   ("Bugs ","Bunny","567 Carrot Street","Rascal",58),
	   ("Wiley ","Coyote","999 Acme Way","Canyon",61),
	   ("Cat ","Woman","234 Purrfect Street","Hairball",32),
	   ("Tweety ","Bird","543","Itotltaw",28);
       
select * from Peoples;