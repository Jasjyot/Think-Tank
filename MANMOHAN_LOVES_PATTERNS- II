/*
Input Format:
Single integer N denoting number of lines of the pattern.
Constraints:
N<=1000
Output Format:
Pattern.

Sample Input:
5
Sample Output:
1
11
202
3003
40004

Source:Hackerblocks
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n)
    {
    cout<<"1\n";
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1)
            {
                cout<<i-1;
            }
            else if(j==i)
            {
                cout<<i-1;
            }
            else
            {
                cout<<0;
            }
        }
        cout<<"\n";
    }
    }
    return 0;
}
