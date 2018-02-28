#include <iostream>
using namespace std;
int main() {
    int n,count=0;
    cin>>n;
    
    while(n){
        if(n & 1==1){
        count++;
        }
        n=n>>1;
    }
    cout<<count;
}
