#include <iostream>
using namespace std;

int main() 
{
    int x,y;
    cin>>x>>y;
    int max=x^y;
    for(int i=x;i<=y;i++)
    {
        for(int j=i;j<=y;j++)
        {
            //cout<<i<<" "<<j<<endl;
            if(max<(i^j))
            {
                max=i^j;
            }
        }
    }
    cout<<max;
    return 0;
}
