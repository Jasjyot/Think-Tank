#include <iostream>
#include <cmath>
using namespace std;
long long int func(long long int n);
long long int func(long long int n)
{
    long long int sum=0;
    if(n%2==0)
    {
        sum=(n/2);
    }
    else
    {
        sum=((n/2)-n);
    }
    return sum;
}

int main() {
    long long int n;
    int testCases;
    cin>>testCases;
    while(testCases)
    {
        cin>>n;
        cout<<func(n)<<"\n";
        testCases--;
    }
    return 0;
}
