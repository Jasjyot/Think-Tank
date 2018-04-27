/*
Source: CODEFORCES
*/


#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    
    int n,ans=0,d=0;
    cin>>n;
    int n1=n;
    while(n1)
    {
        n1=n1/10;
        d++;
    }
 
    
    for(int i=d-1;i>0;i--)
    {
        ans=ans+pow(2,i);
    }
    int last;
    int i=1;
    while(i<=d)
    {
        last=n%10;
        if(last==7)
        {
            ans=ans+(pow(2,i)/2);
        }
        n=n/10;    
        i++ ;
    }
    
    cout<<(ans+1);
     
    
    return 0;
}
