#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t,n;
    cin>>t;
    
    
    while(t){
        
        cin>>n;
        int arr[n];
        int c=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
            if(arr[i]<0){
                c++;
            }
        }
        
        if(c==n){
            cout<< (*max_element(arr,arr+n))<<endl;
        }
        else{
            int currentSum=0,maxSum=0;
            for(int i=0;i<n;i++){
                currentSum=currentSum+arr[i];
                if(currentSum<0){
                    currentSum=0;
                }
                if(currentSum>maxSum){
                    maxSum=currentSum;
                }
                
            }
            cout<<maxSum<<endl;
        }
        
        t--;
    }
	return 0;
}
