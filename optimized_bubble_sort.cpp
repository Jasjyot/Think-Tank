// bubble sort using call by reference to an array
// optimized bubble sort :)



#include<iostream>
using namespace std;
void bubbleSort(int brr[],int n);

void bubbleSort(int brr[],int n){
    
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1-j;i++){
            if(brr[i]>brr[i+1]){
                brr[i+1]=brr[i+1]+brr[i];
                brr[i]=brr[i+1]-brr[i];
                brr[i+1]=brr[i+1]-brr[i];
            }
        }
    }
    
}

int main() {
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bubbleSort(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
    
	return 0;
}
