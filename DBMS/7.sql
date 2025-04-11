drop table student;

create table student
(
id int not null unique,
name varchar(25) not null,
english int default 0,
maths int default 0,
science int default 0,
total int
);

create trigger total_data
before insert on 18_january.student
for each row
set new.total = new.english+new.maths+new.science;

select * from student;

insert into student(id,name,english,maths,science) values(101,'asd',12,15,22);

insert into student(id,name,maths,science) values(102,'zxc',25,27);

select * from student;

insert into student(id,name) values(103,'tyu');

select * from student;

create table Person
(
id int not null unique,
name varchar(25) not null,
age int not null
);

create table deleted_data
(
id int,
name varchar(25),
age int
);

create trigger recycle
before delete on 18_january.Person
for each row
insert into deleted_data values(old.id,old.name,old.age);

insert into Person values(101,'qwe',12);
insert into Person values(102,'asd',21);
insert into Person values(103,'zxc',25);

select * from person;

select * from deleted_data;

delete from person where id = 101;
delete from person where id = 103;

drop trigger recycle;

create table Demo
(
id 