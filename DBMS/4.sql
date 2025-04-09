create role admin;

create user Rohan identified by 'abc@123' default role admin; 

grant select on employees to Rohan;

grant delete,update on employees to Rohan;

select * from employees;

revoke delete on employees from Rohan;