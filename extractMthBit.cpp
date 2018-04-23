#include <iostream>
using namespace std;
int main() {
   
   int no,m;
   cin>>no>>m;
   
   int andNumber=(1<<m);

   if((no & andNumber )>>m)
   {
       cout<<"1";
   }
   else
   {
       cout<<"0";
   }
   
   
   return 0;
}
