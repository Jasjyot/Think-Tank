#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cumlativeSum[n]={0},s=0,e=0;
    int max=arr[0];
    
    cumlativeSum[0]=arr[0];
    for(int i=1;i<n;i++){
        cumlativeSum[i]=cumlativeSum[i-1]+arr[i];
    }
    
    
    cout<<"Possible subarrays:\n";
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if( (cumlativeSum[j]-cumlativeSum[i]+arr[i]) > max){
                max=cumlativeSum[j]-cumlativeSum[i]+arr[i];
                s= i;
                e= j;
            }
        }    
    }
    cout<<"\nMaximum sum sub-array:\nStart index: "<<s<<"\nEnd index: "<<e
    <<"\nArray Sum: "<<max;
    return 0;
}
