# Write your MySQL query statement below
select name AS customers from customers left join orders on orders.customerId=customers.id where orders.customerId is null;

