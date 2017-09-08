/*
You have been given an integer array 
A
A
 of size 
N
N
. Each element of the array ranges between 
1
1
 and 
10
5
10
5
. You need to find the frequency of each distinct element of the array. The elements need to be present in the output in ascending order. You need to print the value and then frequency of each distinct element.

Input Format:

The first line contains a single integer 
N
N
 denoting the size of the array. The next line contains 
N
N
 space separated integers, denoting the elements of the array.

Output Format

For each distinct integer, print its value and then frequency in a new line. The distinct integers should appear in the output in ascending order.

Source: Hackerearth
*/

#include <iostream>
using namespace std;

int main()
{
    int n,max;
    cin>>n;
    int a[n];
    
    cin>>a[0];
    max=a[0];
    
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(max<a[i])
        {
            max=a[i];
        }
    }
    
    int b[max];
    
    for(int i=0;i<max;i++)
    {
        b[i]=0;
    }
    
    for(int i=0;i<n;i++)
    {
        b[a[i]-1]++;
    }
    
    for(int i=0;i<max;i++)
    {
        if(b[i]!=0)
        {
            cout<<i+1<<" "<<b[i]<<endl;    
        }
        
    }
    
    return 0;
}
