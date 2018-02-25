#include<iostream>
 
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t)
    {
    
    
            
            int n,posSum=0,negSum=0,sum=0,pc=0;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            for(int i=0;i<n;i++)
            {
                if(arr[i]>=0)
                {
                    posSum=posSum+arr[i];
                    pc++;
                }
                else
                {
                    negSum=negSum+arr[i];
                }
            }
            sum=(posSum*pc)+negSum;
            cout<<sum<<endl;
            t--;
    }
    return 0;
}
