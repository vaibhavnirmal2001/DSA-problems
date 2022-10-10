# Write your MySQL query statement below

SELECT MAX(Salary) as SecondHighestSalary FROM Employee WHERE Salary NOT IN (SELECT MAX(Salary) FROM Employee);
