/*
Q Source: Hackerblocks
Sanjay's Problem
*/

#include <iostream>
#include <algorithm>
using namespace std;

bool myCompare(pair<string,int>p1,pair<string,int>p2)
{
    if(p1.second==p2.second)
    {
        return p1.first < p2.first;
    }
    return p1.second > p2.second;
    
}

int main() {
    int n,min;
    cin>>min>>n;
    pair<string, int> emp[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>emp[i].first;
        cin>>emp[i].second;
    }
    
    sort(emp, emp+n, myCompare);
    
    for(int i=0;i<n;i++)
    {
        if(emp[i].second>=min)
        {
            cout<<emp[i].first<<" "<<emp[i].second<<endl;            
        }
    }
        
    return 0;
}
