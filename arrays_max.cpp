#include<iostream>
using namespace std;
int findMax(int brr[],int n);

int findMax(int brr[],int n){

    int max=brr[0];
    
    for(int i=0;i<n;i++)
    {
        if(max<brr[i])
        {
            max=brr[i];
        }
    }
    return max;
}


int main() {
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<findMax(arr,n);
    
    
	return 0;
}
