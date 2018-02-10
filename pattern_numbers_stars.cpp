#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int k=1;k<=n-i;k=k+1)
        {
            cout<<"* ";
        }
        for(int k=1;k<=n-i-1;k=k+1)
        {
            cout<<"* ";
        }
        
        cout<<"\n";
    }
    
}
