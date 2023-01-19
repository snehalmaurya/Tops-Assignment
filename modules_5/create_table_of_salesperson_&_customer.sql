--  Create table given below: Salesperson and Customer

create table SALESPERSON(
SNO int primary key,
SNAME varchar (255),
CITY varchar (255),
COMM float);

desc SALESPERSON;

insert into SALESPERSON(
SNO,SNAME,CITY,COMM)values
(1,"Peel","London",.12),
(2,"Serres","San Jose",.13),
(4,"Motika","London",.11),
(7,"Rafkin","Barcelona",.15),
(3,"Axelrod","New York",.1);

select * from SALESPERSON ;

create table CUSTOMER(
CNM int primary key,
CANME  varchar (255),
CITY  varchar (255),
RATING int,
SNO int,
foreign key(SNO) references SALESPERSON(SNO));

desc CUSTOMER;

insert into CUSTOMER(
CNM,CANME,CITY,RATING,SNO)values
(201,"HOFFMAN","LANDON",100,1001),
(202,"GIOVANNE","ROE",200,1003),
(203,"LIU","SAN JOSE",300,1002),
(204,"GRASS","Barrcelona",100,1002),
(206,"CLEMENS","LANDON",300,1007),
(207,"PEREIRA","ROE",100,1004);

select * from CUSTOMER;

-- All orders for more than $100
select * from Customer where rating > 100; 

-- Names and cities of all salespeople in London with commission below 0.12 
select sname, city, comm from  salesperson where city="London" and comm < 0.12;

-- All salespeople either in Barcelona or in London
select * from  salesperson where city="Barcelona" or city="London";

-- All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded)
select * from  salesperson where comm between 0.10 and 0.12;

-- All customers excluding those with rating <= 100 unless they are located in Roe
select * from  Customer where  rating <= 100 and city="Roe";
Footer
