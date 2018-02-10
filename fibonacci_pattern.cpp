#include <iostream>
using namespace std;
int fib(int index);
int fib(int index)
{
    if(index==0)
    {
        return 0;
    }
    else if(index==1)
    {
        return 1;
    }
    else
    {
        return (fib(index-1)+fib(index-2));
    }
}
int main() {
    int n,index=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            index++;
            cout<<fib(index)<<" ";
        }
        cout<<"\n";
    }
}
