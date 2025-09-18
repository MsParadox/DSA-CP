//ques: for grid nXm size wih L U R D  which are direction in which you can go.
//Check whether we can reach from (0,0) to (n-1,m-1)
//constraint : sc O(1)

//m1:by recu: but by dfs O(bystack) and bfs O(queue)-----X

//m2:worst case we have to go every grid ele then ans =nXm  Now take count of step if it is >nXm then there is cycle

//m3:by using Hare and tortoise approch : slow and fast pointer if they collide then there is cycle 