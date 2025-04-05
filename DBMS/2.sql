create table student
(id int not null unique,
name varchar(25) not null,
percentage float not null
);

insert into student values(101,'Aryan',80.52);

insert into student(percentage,id,name) values(52.65,102,'Mahek');

insert into student values(103,'Manas',84.21);

insert into student values(104,'Dhyan',54.23),
(105,'Rohan',98.56),
(106,'Rahul',75.45);

select id,name from student;
select * from student;

update student set percentage = 98.23 where id = 104;

delete from student where id = 104;

select * from student where percentage>80;