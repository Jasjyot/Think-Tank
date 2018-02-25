#include<iostream>
 
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
 
    long long int arr[n];
    long long int max=0;
    
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max )
        {
           max=arr[i]; 
        }
    }
    
    cout<<max;
    return 0;
}
