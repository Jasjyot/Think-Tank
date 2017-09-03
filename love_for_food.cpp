#include<iostream>
using namespace std;
int top=-1;
void push(int stack[],int item);
void pop(int stack[]);
int main()
{
    int noQueries,fNo,item;
    cin>>noQueries;
    int stack[noQueries];
    for(int i=0; i<noQueries; i++)
    {
        cin>>fNo;
        if(fNo==1)
        {
            pop(stack);
        }
        else if(fNo==2)
        {
            cin>>item;
            push(stack,item);
        }
    }
    return 0;
}
void pop(int stack[])
{
    if(top==-1)
    {
        cout<<"No Food\n";
    }
    else
    {
    cout<<stack[top]<<endl;
    top--;
    }
}    
void push(int stack[],int item)
{
    top++;
    stack[top]=item;
}