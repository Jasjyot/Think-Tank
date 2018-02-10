#include <iostream>
using namespace std;
int main() {
    int n=5;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(int j=1;j<=i/2;j++)
            {
                cout<<"01";
            }
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
                if(j%2==0)
                {cout<<"0";}
                else
                {cout<<"1";}
            }
        }
        cout<<endl;
    }
    return 0;
}
