# Write your MySQL query statement below
select firstName,lastName,city,state 
from person
LEFT JOIN Address
ON person.personID = Address.personId;