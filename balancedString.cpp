#include<iostream>
#include<string>
using namespace std;
int top=-1;
int check(string str,char stack[],int len);
int stackSize();
int push(char stack[],char item,int len);
int pop();

int main()
{
    string str;
    cout<<"Enter the string: \n";
    cin>>str;
    int len = str.size();
    char stack[len];
    cout<<len<<endl<<str<<endl;
    
    if (check(str,stack,len))
    {
        cout<<"String is balanced";
    }

    else
    {
        cout<<"String is unbalanced";
    }

    return 0;
}
int push(char stack[],char item,int len)
{
    if(top==len-1)
    {
        return 1;
    }
    else
    {
        top++;
        stack[top]=item;
        return 0;
    }
}
int pop()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        top--;
        return 0;
    }
}
int stackSize()
{
    return top+1;
}

int check(string str,char stack[],int len)
{   int flag=0;    
    for(int i=0;i<len;i++)
    {
        if(str[i]=='(')
        {
            if(push(stack,'(',len))
            {
                flag=1;
                break;
            }
        }
        else if(str[i]==')')
        {
            if(pop())
            {
                flag=1;
                break;
            }
        }
    } 
    if(stackSize()==0 && flag==0)
    {
      return 1;
    }
    return 0;
}