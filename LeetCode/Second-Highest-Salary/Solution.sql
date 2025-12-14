1# Write your MySQL query statement below
2select max(salary) as SecondHighestSalary
3from employee
4where employee.salary<(
5    select max(salary) as Maxsalary
6    from employee
7)