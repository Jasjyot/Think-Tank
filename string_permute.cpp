//write a function to check whether two strings are permutation of each other ?

#include <iostream>
using namespace std;

bool permutationCheck(string str1, string str2)
{
    int len1=str1.length();
    int len2=str2.length();
    int universe1[128]={0};
    int universe2[128]={0};
    
    for(int i=0;i<len1;i++)
    {
        universe1[int(str1[i])]++;
    }
    
    for(int i=0;i<len2;i++)
    {
        universe2[int(str2[i])]++;
    }
    
    for(int i=0;i<128;i++)
    {
        if(universe1[i]!=universe2[i])
        {
            return false;
        }
    
    }
    return true;
}

int main() {
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    if(permutationCheck(str1,str2))
    {
        cout<<"Yes! Both strings are permutation of each other";
    }
    else
    {
        cout<<"No! Both strings are not permutation of each other";
    }
    return 0;
}
