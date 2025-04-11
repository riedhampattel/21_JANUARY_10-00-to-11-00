delimiter &&
create procedure display()
select * from employees order by first_name;
end &&

call display();

drop procedure display;

delimiter &&
create procedure display(in id int)
begin
select * from employees where employee_id = id;
end &&

call display(107);

select * from employees;

delimiter &&
create procedure update_salary(in id int,sal int)
begin
update employees set salary = salary + sal where department_id = id;
end &&

call update_salary(60,5000);

select * from employees;

select first_name,last_name,salary from employees;

create view Persons as select first_name,last_name,salary from employees;

select * from persons;