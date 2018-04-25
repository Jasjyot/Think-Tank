#include<iostream>

using namespace std;


int * find(int *p, int n)
{
    int xorNos=0;
    for(int i=0;i<n;i++)
    {
        xorNos = xorNos^p[i];
    }
    int setPos=0;

    int xorNos1=xorNos;
    while((xorNos1&1)!=1)
    {
        setPos++;
        xorNos1=xorNos1>>1;
    }
    
    
    int xorSubNos=0;
    for(int i=0;i<n;i++)
    {
        if( (p[i]>>setPos)&1 )
        {
            xorSubNos = xorSubNos^p[i];
        }    
    }
    int u2=xorSubNos^xorNos;
    static int unique[]={xorSubNos,u2};
    return unique;
    
}



int main() 
{
    
    int nos[]={ 1,3,1,5,2,2,5,5};
    int n=sizeof(nos)/sizeof(int);
    
    int * uptr;
    uptr = find(nos,n);
    
    for(int i=0;i<2;i++)
    {
        cout<<*(uptr+i)<<endl;
    }
    return 0;
}
