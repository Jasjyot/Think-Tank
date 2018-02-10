#include<iostream>
using namespace std;
int main() {
    float p;float t=1;int days=365;
    cin>>p;
    float ans=1-p,value=1;
    
    
    while(ans<value)
    {
        value=value*((days-t)/days);
        t++;
    }
    
    
    
    cout<<t;
	return 0;
}
