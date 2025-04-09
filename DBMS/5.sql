delete from employees where employee_id = 100;

select * from employees;

rollback;

select * from employees;

update employees set salary = 7000 where employee_id = 100;

select * from employees;

rollback;

select * from employees;

delete from employees where salary = 17000;

select * from employees;

commit;

select * from employees;

rollback;

select * from employees;

update employees set salary = 19000 where employee_id = 103;

select * from employees;

commit;

select * from employees;

rollback;