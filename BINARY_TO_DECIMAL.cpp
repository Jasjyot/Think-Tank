/*
Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Constraints:
0 < N <= 1000000000

Sample Input:
101010
Sample Output:
42
*/

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
