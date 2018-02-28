#include<iostream>
using namespace std;

void insertionSort(int brr[], int n);

void insertionSort(int brr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++)
   {
       key = brr[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && brr[j] > key)
       {
           brr[j+1] = brr[j];
           j = j-1;
       }
       brr[j+1] = key;
   }
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    insertionSort(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
	return 0;
}
