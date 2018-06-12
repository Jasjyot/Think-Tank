#include <iostream>
#include <vector>
using namespace std;
int main() 
{
 int n,l;
 cin>>n;
 if(n==0)
 {
    cout<<n;
    exit(0);
 }
 
 vector<int> rn;
 while(n)
 {
    l=n%10;
    rn.push_back(l);
    n=n/10;
 }
 
 for(int i=0;i<rn.size();)
 {
    if(rn[i]==0)
    {
       rn.erase(rn.begin()); 
    }
    else
    {
        break;
    }
 }
 
 for(int i=0;i<rn.size();i++)
 {
    cout<<rn[i];
 }
 
}
