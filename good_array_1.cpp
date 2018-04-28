/*
Source:Hackerblocks
*/

#include <iostream>
using namespace std;

int goodArray(int *arr, int n )
{
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
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
