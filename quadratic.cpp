#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    float root1,root2,d=b*b-(4*a*c);
    if(d>0)
    {
        root1= (-b+pow(d,0.5))/(2*a);
        root2= (-b-pow(d,0.5))/(2*a);
        cout<<"Real and Distinct\n"<<root2<<" "<<root1<<"\n";
    }
    else if(d==0)
    {
         root1= (-b)/(2*a);
         root2=root1;
         cout<<"Real and Equal\n"<<root2<<" "<<root1<<"\n";
    }
    else
    {
        cout<<"Imaginary\n";
    }
    return 0;
}
