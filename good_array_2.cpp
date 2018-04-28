/*
Source: Hackerblocks
*/

#include <iostream>
using namespace std;

int goodArray(int *arr, int n )
{
    int sum=0;
    int count=0;
    int cSum[n]={arr[0]};
    
    for(int i=1;i<n;i++)
    {
        cSum[i]=cSum[i-1]+arr[i];    
    }
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=cSum[j]-cSum[i]+arr[i];
            if(sum%n==0)
            {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int t;
    cin>>t;
    
    while(t)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<goodArray(arr,n)<<endl;
        
        t--;        
    }
    return 0;
}
