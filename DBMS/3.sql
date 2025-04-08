select * from employees;

select * from employees where department_id = 90;

select * from employees where salary>10000;

select * from employees where department_id = 90 and salary>20000;

select * from employees where department_id = 90 or salary>20000;

select * from employees where salary between 10000 and 20000;

select * from employees where department_id = 90 or department_id = 60 or department_id = 50;

select * from employees where department_id in (90,60,50);

select * from employees where department_id not in (90,60,50);

select * from employees where department_id is null;

select * from employees where comission_pct is not null;

select * from employees where comission_pct is null;

select distinct department_id from employees;

select first_name,last_name,salary as income from employees;

select first_name,last_name,salary+10000 as salary from employees;

select first_name,last_name,salary-10000 as salary from employees;

select * from employees order by salary asc;

select * from employees order by salary desc;

select * from employees order by 5;

select first_name,last_name,salary as income from employees order by income;

select concat(first_name,' ',last_name) as full_name from employees;

select * from employees where first_name like '%ee%';

select * from employees where first_name like '%e%e%';

select * from employees where first_name like '%e_';

select * from employees where hire_date like '%-j_n-%';

select * from employees where hire_date like '%-ju_-%';

select min(salary) from employees;

select max(salary) from employees;

select sum(salary) from employees;

select avg(salary) from employees;

select count(COMISSION_PCT) from employees;

select count(*) from employees;

select first_name,last_name,salary from employees where salary = (select min(salary) from employees);

select first_name,last_name,salary from employees where salary = (select max(salary) from employees);

select department_id,min(salary) from employees group by department_id;

select * from employees;

select department_id,min(salary) from employees group by DEPARTMENT_ID having min(salary)>5000 order by 2;

select * from employees order by salary desc limit 5;

select * from employees order by salary limit 10 offset 5;