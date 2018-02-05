#include <iostream>
#include <cmath>
using namespace std;
int convert(int n);
int convert(int n)
{   int count=0,sum=0;
    while(n)
    {
        int remainder=n%10;
        sum=sum+(remainder*pow(2,count));
        count++;
        n=n/10;
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    cout<<convert(n);
    return 0;
}
