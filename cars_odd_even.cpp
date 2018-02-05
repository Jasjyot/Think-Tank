#include <iostream>
using namespace std;
bool check(int no);
bool check(int no)
{   int sumEven=0,sumOdd=0;
    while(no)
    {
        int remainder=no%10;
        if(remainder%2==0)
        {
            sumEven=sumEven+remainder;
        }
        else
        {
            sumOdd=sumOdd+remainder;
        }
        no=no/10;
    }
    if((sumOdd%3==0)||(sumEven%4)==0)
    {
        return true;
    }
    return false;
}

int main() 
{
    int testCase,no;
    cin>>testCase;
    while(testCase)
    {
        cin>>no;
        if(check(no))
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        testCase--;
    }
}
