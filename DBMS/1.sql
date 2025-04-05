create schema 18_january;

create table 18_january.student
(
id int not null unique,
name varchar(20) not null,
std int not null,
percentage float not null
);

describe student;
describe employee;

-- change table name
alter table student rename to employee;

-- change column name
alter table employee rename column percentage to commission_pct;

-- change data type,add any constraints or remove any constraints
alter table employee modify std varchar(5);

-- delete any column
alter table employee drop column std;

-- add column
alter table employee add column salary int not null;

-- add column at specific position
alter table employee add column hire_date date not null after name;

drop table employee;

drop schema 18_january;