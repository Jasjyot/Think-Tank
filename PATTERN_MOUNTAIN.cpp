/*
Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   
                       
                       Source: Hackerblocks
*/


#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i==n)
        {
            for(int m=1;m<=n;m++)
            {
                cout<<m<<"\t";
            }
            for(int j=n-1;j>=1;j--)
            {
                cout<<j<<"\t";
            }
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
                cout<<j<<"\t";
            }
            for(int k=1;k<=n-i;k++)
            {
                cout<<" "<<"\t"; 
            }
            for(int k=1;k<=n-i-1;k++)
            {
                cout<<" "<<"\t"; 
            }
            for(int l=i;l>=1;l--)
            {
                cout<<l<<"\t";
            }
            cout<<"\n"; 
        }
    }
    return 0;
}
