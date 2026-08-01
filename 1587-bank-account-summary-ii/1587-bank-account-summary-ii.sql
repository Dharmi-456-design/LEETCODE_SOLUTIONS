select u.name , sum(t.amount) As balance
from users u
JOIN Transactions t
On u.account = t.account
GROUP BY u.account,u.name
HAVING SUM(t.amount) > 10000;

