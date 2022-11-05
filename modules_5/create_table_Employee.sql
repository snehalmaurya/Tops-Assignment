create table Employee(

Employee_id int primary key auto_increment,
First_name varchar(255),
Last_name varchar(255),
Salary int,
Joining_date datetime,
Department varchar(255));

desc Employee;

insert into Employee(
First_name,Last_name,Salary,Joining_date,Department)
values("John","Abrahm",1000000,"2013-01-01 12:00:00","Banking"),
      ("Michael","Clarke",800000,"2013-01-01 12:00:00","Insurance"),
      ("Roy","Thomas",700000,"2013-02-01 12:00:00","Banking"),
      ("Tom","Jose",600000,"2013-02-01 12:00:00","Insurance"),
      ("Jerry","Pinto",650000,"2013-02-01 12:00:00","Insurance"),
      ("Philip","Mathew",750000,"2013-01-01 12:00:00","Service"),
      ("TestName1","123",650000,"2013-01-01 12:00:00","Service"),
      ("TestName2","name",600000,"2013-02-01 12:00:00","Insurance");
      
Select * from Employee;

create table Incentive
(Employee_ref_id int,
incentive_date date,
incentive_amount int,
foreign key(Employee_ref_id) references Employee(Employee_id) );

desc Incentive;

insert into Incentive
(Employee_ref_id,incentive_date,incentive_amount)
values(1,"2013-02-01",5000),
       (2,"2013-02-01",3000),
       (3,"2013-02-01",4000),
       (1,"2013-01-01",4500),
       (2,"2013-01-01",3500);
       
select * from Incentive;

-- Get First_Name from employee table using Tom name “Employee Name”.
select first_name from Employee where first_name="Tom";

-- Get FIRST_NAME, Joining Date, and Salary from employee table. 
select first_name,Joining_date,Salary from Employee;

-- Get all employee details from the employee table order by First_Name
-- Ascending and Salary descending?
select * from Employee order by First_Name asc;
select * from Employee order by  Salary desc;

-- Get employee details from employee table whose first name contains ‘J’.
select * from Employee where first_name like "J%";
 
-- Get department wise maximum salary from employee table order by salary ascending? 
select Department,Salary from Employee group by Department order by  Salary asc; 
SELECT Department ,max(Salary) as Salary  from employee group by  Department order by Salary asc;

-- Select first_name, incentive amount from employee and incentives table for
-- those employees who have incentives and incentive amount greater than 3000 

select  employee.first_name ,incentive.incentive_amount from employee inner join incentive 
on employee.Employee_id =incentive.Employee_ref_id where incentive.incentive_amount >=3000 ;

--Create After Insert trigger on Employee table which insert records in view table

create table view(
emp_id int,
name varchar(255),
salary bigint);

delimiter $$

create trigger tr_insert 
after insert
on employee for each row
begin
insert into view(emp_id,name,salary)values
(new.Employee_id,new.First_name,new.Salary);
end
 $$ delimiter ;
 
 insert into Employee(
First_name,Last_name,Salary,Joining_date,Department)
values("Abdu","RAzak",5500000,"2013-01-01 12:00:00","Banking");

select * from view;
select * from employee;
