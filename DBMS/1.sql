create schema 18_january;

create table 18_january.student
(
id int not null unique,
name varchar(20) not null,
std int not null,
percentage float not null
);

describe student;