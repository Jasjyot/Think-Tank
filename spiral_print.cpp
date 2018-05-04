// Code to print an array spirally
// errors in exception cases. 

#include <iostream>
using namespace std;

void spiralPrint(int arr[][5],int R,int C)
{
    
    int startR=0 ,startC=0 ,endR=R-1 ,endC=C-1 ;
    while(endR-startR >=0 && endC-startC>=0 )
    {
        for(int i=startC;i<=endC;i++)
        {
           cout<<arr[startR][i]<<" "; 
        }
        
        for(int i=startR+1;i<=endR;i++)
        {
           cout<<arr[i][endC]<<" "; 
        }
        
        for(int i=endC-1;i>=startC;i--)
        {
            cout<<arr[endR][i]<<" ";
        }
        
        for(int i=endR-1;i>=startR+1;i--)
        {
            cout<<arr[i][startC]<<" ";
        }
        
        startR++ ;
        startC++ ;
        endR--;
        endC-- ;
    }
}

int main() {
   int arr[][5]={
       {1,2,3,4,5},
       {6,7,8,9,10},
       {11,12,13,14,15},
       
   };
   
   spiralPrint(arr,3,5);
   
   return 0;
}
