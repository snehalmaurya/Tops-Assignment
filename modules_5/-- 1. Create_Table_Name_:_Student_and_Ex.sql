-- 1. Create Table Name : Student and Exam

create database module5;

use module5;

create table Student(
RollNo int primary key auto_increment,
Name varchar(225),
Branch  varchar(225));

desc Student;

insert into Student
(Name,Branch)
values("Jay","Computer Science"),
      ("Suhani","Electronic and com"),
     ("Kriti","Electronic and com");
     
select * from	Student;


create table Exam(
RollNo int ,
s_code varchar(225),
marks int,
p_code varchar(225),
foreign key(RollNo) references Student(RollNo) );

desc Exam;

insert into Exam
(RollNo,s_code,marks,p_code)
values(1,"CS11",50,"CS"),
       (1,"CS12",60,"CS"),
       (2,"EC101",66,"EC"),
       (2,"EC102",70,"EC"),
       (3,"EC101",45,"EC"),
       (3,"EC102",50,"EC");
       
select * from Exam;