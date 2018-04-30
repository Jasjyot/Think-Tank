//program to print all substrings of a given string
// 3 for loops used. But still complexity is O(n^2)


#include <iostream>
using namespace std;

void substring(string str)
{
    int len=str.length(),c=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<str[k];
            }
            cout<<endl;
        }
    }
    
}

int main() {
    string str;
    getline(cin,str);
    substring(str);
    return 0;
}
