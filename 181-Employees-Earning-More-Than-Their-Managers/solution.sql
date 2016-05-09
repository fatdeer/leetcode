# Write your MySQL query statement below
select E.Name from Employee E , Employee M where E.ManagerId = M.Id and E.Salary > M.Salary