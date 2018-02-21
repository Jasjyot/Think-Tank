"""
The sports team of Indore is practicing for shoots at basketball court.Each player is recognized by his jersey number.

The players are standing in a line and attempting a shoot for basket one by one.The player who is standing at frontmost position in the line has to attempt for the basket and go back to the line in the backmost position.
You are given a string consisting of 0's and 1's denoting the failure and success of the basket respectively.You have to find the jersey number of the player standing at the asked position( after 3 successfull basket attempts.
Input

    The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
    First line of every test case consist of an integer N denoting total number of players.
    Next N integersA[i] denotes the jersey number of players standing from front to back.
    Next input is a string S consisting of 0's and 1's.
    Next input is an integer R denoting the position of player(from front).

Output

Output consists an integer denoting the jersey number of the player standing at Rth position
Constraints

    1 ≤ T ≤ 10
    1 ≤ N ≤ 10^6
    1 ≤ A[i] ≤ 100

Example

Input:
2
10
4 7 2 9 1 10 8 3 6 5
00110000100
4
5
1 2 3 4 5
11100010
2
"""
#https://www.codechef.com/COGE2017/problems/CGEEK01/

t=input()
p=[]
while t>0:
    n=input()
    li=raw_input()
    lis=list(int(i) for i in li.split(' '))
    s=raw_input()
    r=input()
    count=0
    
    for j in s:
        if count==3:
            break
        if j=="0":
            lis.append(lis[0])
            lis.remove(lis[0])
        else:
            lis.append(lis[0])
            lis.remove(lis[0])
            count+=1
    t-=1
   
    p.append(lis[r-1])
for k in p:
    print k

