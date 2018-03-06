#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
void lexicalSort(string brr[ ],int n);
void lexicalSort(string brr[ ],int n)
{
    int min,j;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if( (brr[min].compare(brr[j])>0) )
            {
                min=j;
            }
        }
        swap(brr[min],brr[i]);
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
