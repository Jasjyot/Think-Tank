/*You have been given an undirected graph consisting of 
N nodes and 
M edges. This graph can consist of self-loops as well as multiple edges. In addition , you have also been given 
Q queries. For each query , you shall be given 2 integers 
A and B. You just need to find if there exists an edge between node 
A and node B. If yes, print "YES" (without quotes) else , print "NO"(without quotes).
Source :Hackerearth
*/
#include<iostream>
using namespace std;
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    bool A[nodes][nodes];
    int a,b;
    
    for(int i=0;i<edges;i++)
    {
        cin>>a>>b;
        A[--a][--b]=true;
    }
    
    int queries;
    cin>>queries;

    for(int i=0;i<queries;i++)
    {
    cin>>a>>b;
        if(A[--a][--b]==true)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 1;
}
