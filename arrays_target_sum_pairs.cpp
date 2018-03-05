#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    
    int n,sum,key;
    cin>>n;
    float arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];        
    }
    sort(arr,arr+n);
    cin>>sum;
    
    //find indices of both additives
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-1.5)
        {
            key=sum-arr[i];
            for(int j=i+1;j<n;j++)
            {
                if(key==arr[j])
                {
                    cout<<arr[i]<<" and "<<arr[j]<<endl;
                    arr[j]=-1.5;
                    arr[i]=-1.5;
                }
            }
        }
    }
	return 0;
}
