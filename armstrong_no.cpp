#include<iostream>
#include<cmath>
using namespace std;
bool func(int no);
bool func(int no)
{   int a=no,b=no;int remain,sum=0; int digits=0;
    while(a)
    {
        a=a/10;
        digits++;
    }
    while(b)
    {
        remain=b%10;
        sum=sum+pow(remain,digits);
        b=b/10;
    }
    if(no==sum)
    {
        return true;
    }
    return false;
}

int main() {
    int no;
    cin>>no;
    if(func(no))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
	return 0;
}
