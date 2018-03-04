#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }
    
    int currentSum=0, maxSum=0;
    
    for(int i=0;i<n;i++)
    {
        currentSum=currentSum+arr[i];
        
        if(currentSum>maxSum){
            maxSum=currentSum;
        }
        
        if(currentSum<0){
        currentSum=0;
        }
    }
    
    cout<<"Maximum subarray sum: "<<maxSum;
    return 0;
}
