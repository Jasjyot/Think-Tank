/*
Alice is taking a cryptography class and finding anagrams to be very useful. 
We consider two strings to be anagrams of each other if the first string's 
letters can be rearranged to form the second string. In other words, both strings must contain the same exact
letters in the same exact frequency For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.
Alice decides on an encryption scheme involving two large strings where encryption
is dependent on the minimum number of character deletions required to make the two strings anagrams. 
Can you help her find this number?

Given two strings a and b that may or may not be of the same length,
determine the minimum number of character deletions required to make  and  anagrams.
Any characters can be deleted from either of the strings.
Source : Hackerrank
Question link: https://www.hackerrank.com/challenges/ctci-making-anagrams/problem
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int number_needed(string a, string b) 
{
    int count[26]={0};
    int aLen=a.length();
    int bLen=b.length();
    for(int i=0;i<aLen;i++)
    {
        count[a[i]-97]++;
    }
    for(int i=0;i<bLen;i++)
    {
        count[b[i]-97]--;
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(count[i]<0)
        {
            count[i]=count[i]*(-1);                
        }
            c=c+count[i];
        
    }
    return c;
}


int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
