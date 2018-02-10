#include <iostream>
#include <cmath>
using namespace std;
int steps(int n);
int steps(int n)
{   int count=0;
    while(n)
    {
        n=n-pow(2,int(log2(n)));
        count++;
       
    }
    return count;
}
int main() {
    int n,testCases;
    cin>>testCases;
    while(testCases)
    {
        cin>>n;
        cout<<steps(n)<<endl;
        testCases--;
    }
    return 0;
}

