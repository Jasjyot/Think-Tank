#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n>=5 && n%2==1)
    {
        for(int j=1;j<n;j++)
        {
            if(j%2==1)
            {
                cout<<"*";
                for(int s=1;s<=((n/2)-1);s++)
                {
                    cout<<" ";
                }
                cout<<"*";
                if(j==1)
                {
                    for(int s=1;s<=(n/2);s++)
                    {
                        cout<<"*";
                    }
                }
            }
            cout<<"\n";
        }
        for(int i=1;i<=n;i++)
        {
            cout<<"*";
        }
        for(int j=1;j<n;j++)
        {
            if(j%2==0)
            {
                if(j==n-1)
                {
                    for(int s=1;s<=(n/2);s++)
                    {
                        cout<<"*";
                    }
                }
                else
                {
                    for(int s=1;s<=(n/2);s++)
                    {
                    cout<<" ";
                    }
                }
                    
                
                cout<<"*";
                for(int s=1;s<=((n/2)-1);s++)
                {
                    cout<<" ";
                }
                cout<<"*";
                
            }
            cout<<"\n";
        }
        
    }
    
	return 0;
}
