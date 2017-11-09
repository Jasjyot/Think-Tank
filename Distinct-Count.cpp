/*

Given an array 
A
A of 
N
N integers, classify it as being Good Bad or Average. It is called Good, if it contains exactly 
X
X distinct integers, Bad if it contains less than 
X
X distinct integers and Average if it contains more than 
X
X distinct integers.

Input format:
First line consists of a single integer 
T
T denoting the number of test cases.
First line of each test case consists of two space separated integers denoting 
N
N and 
X
X.
Second line of each test case consists of 
N
N space separated integers denoting the array elements.

Output format:
Print the required answer for each test case on a new line.

Source: hackerearth
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,x;int temp;
        set<int> lonisa;
        cin>>n>>x;
        
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            lonisa.insert(temp);
        }
        if(lonisa.size()==x)
        {
            cout<<"Good\n";
        }
        else if(lonisa.size()<x)
        {
            cout<<"Bad\n";
        }
        else if(lonisa.size()>x)
        {
            cout<<"Average\n";
        }
        
        t--;
    }
    return 0;
}







