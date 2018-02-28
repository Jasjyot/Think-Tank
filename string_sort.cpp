#include<iostream>
#include<string>

using namespace std;
void lexicalSort(string brr[ ],int n);
void lexicalSort(string brr[ ],int n){
    
    
    int i, j;

    for (i = 1; i < n; i++)
   {
       string key = brr[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && brr[j].compare( key)   )
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
    string arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    lexicalSort(arr, n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    
    
	return 0;
}
