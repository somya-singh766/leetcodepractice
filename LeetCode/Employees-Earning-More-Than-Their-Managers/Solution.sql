1SELECT e1.name AS Employee
2FROM Employee e1
3JOIN Employee e2
4ON e1.managerId = e2.id
5WHERE e1.salary > e2.salary;
6