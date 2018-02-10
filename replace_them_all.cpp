#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long int n,dup;
    cin>>n;
    int remain,c=0;
    dup=n;
    if(n==0)
    {
        cout<<"5";
    }
    while(dup)
    {
        dup=dup/10;
        c++;
    }
    for(int i=1;i<=c;i++)
    {
        dup=n/pow(10,c-i);
        remain=(dup)%10;
        if(remain==0)
        {
            cout<<5;
        }
        else
        {
            cout<<remain;
        }
    }
    return 0;
}
