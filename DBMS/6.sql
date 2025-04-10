create table Users
(
user_id int primary key,
name varchar(25) not null,
age int not null
);

insert into users values(101,'Rohan',12);
insert into users values(102,'Rahul',15);
insert into users values(103,'Shreya',20);
insert into users values(104,'Dharmik',35);
insert into users values(105,'Nayan',25);

select * from users;

create table orders
(
order_id int not null unique,
order_name varchar(25) not null,
user_id int not null,
foreign key orders(user_id) references users(user_id)
);

insert into orders values(1,'Toothpaste',101);
insert into orders values(2,'Soap',101);
insert into orders values(3,'Perfume',104);
insert into orders values(4,'Shampoo',105);
insert into orders values(5,'Comb',104);

select * from orders;

select * from users
natural join orders;

select users.user_id,users.name,orders.order_name
from users inner join orders on users.user_id = orders.user_id;

select users.user_id,users.name,orders.order_name
from users left join orders on users.user_id = orders.user_id;

select users.user_id,users.name,orders.order_name
from users right join orders on users.user_id = orders.user_id;

select * from users cross join orders order by 1;

select * from users
union
select * from orders;

create table temp1
(
id int,
name varchar(25)
);

insert into temp1 values(101,'qwe');
insert into temp1 values(102,'abc');
insert into temp1 values(103,'xyz');

create table temp2
(
id int,
name varchar(25)
);

insert into temp2 values(101,'qwe');
insert into temp2 values(104,'ere');
insert into temp2 values(105,'yut');

select * from temp1
union
select * from temp2;

select * from temp1
union all
select * from temp2;