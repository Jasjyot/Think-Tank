/*
A left rotation operation on an array of size  shifts each of the array's elements  unit to the left. 
Given an array of  integers and a number, , perform  left rotations on the array. 
Then print the updated array as a single line of space-separated integers.
Question Source: Hackerrank
Question link: https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem
*/


#include<iostream>
using namespace std;
int main()    
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a[d];
    for(int k=0;k<d;k++)
    {
        a[k]=arr[k];
    }
    for(int j=0;j<n-d;j++)
    {
    arr[j]=arr[j+d];
    }
    for(int k=0;k<d;k++){
        arr[n-d+k]=a[k];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
