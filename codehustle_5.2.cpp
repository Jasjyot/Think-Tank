#include<iostream>
#include<string>
using namespace std;
int main() {
      string str;
    cin>>str;
    int count=0;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(int(str[i])%2==0)
        {
            count++;
        }
    }
    for(int i=0;i<len;i++)
    {
        if(int(str[i])%2==0)
        {
            cout<<count<<" ";
            count--;
        }
        else
        {
            cout<<count<<" ";
        }
    }
   
 
    return 0;
}
