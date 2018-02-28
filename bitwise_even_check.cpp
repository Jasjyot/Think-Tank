// checking whether number is even or not using bitwise operator

// shortest possible code

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    n&1 ? cout<<"Odd" : cout<<"Even" ;
    return 0;
}
