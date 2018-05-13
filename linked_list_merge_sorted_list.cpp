// reverse a L.L
//reverse pointers, not suggestible to copy and reverse the data.
#include <iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node * next;
    
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

// aproach if multiple linked lists have to be created at the same time
/*
class LinkedList
{
    Node * head;
    Node * tail;
    
    public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void insert()
    {
        
    }
};
*/
int findLinkedLength(Node * head)
{
    int len=0;
    while(head!=NULL)
    {
        head=head->next;
        len++;
    }
    return len;
}

//changes should reflect in main. Use &, pass by refernce.
void insertAtHead(Node * &head, int data)
{
    Node*n=new Node(data);
    // Node *n .... dynamic memory allocation
    // the object persists even after function is over
    // Node n.....static memory allocation. The object also gets destroyed after function execution.
    n->next=head;
    head=n;     
}

void insertAtTail(Node * &head , int data)
{
    if(head==NULL)
    {
        head= new Node(data);
        return;
    }
    Node * temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;        
    }
    temp->next=new Node(data);
    return;
}

void insertInMiddle(Node *&head, int data, int posAfter)
{
    if(head==NULL||posAfter==0)
    {
        insertAtHead(head,data);
    }
    else if(posAfter>=findLinkedLength(head))
    {
        insertAtTail(head,data);
    }
    //Insert ai Middle
    else
    {
        Node *n= new Node(data);
        Node * temp= head ;
        while(posAfter>1)
        {
            temp=temp->next;
            posAfter--;
        }
        n->next=temp->next;
        temp->next=n;
    }
}

bool searchRecursive(Node*head,int key)
{
    if(head!=NULL)
    {
        if(head->data==key)
        {
            return true;
        }
        return searchRecursive(head->next, key);
    }
    return false;
}
bool searchIterative(Node*head, int key)
{
    while(head!=NULL)
    {
        if(head->data==key)
        {
            return true;
        }
        head=head->next;
    }
    return false;
}

//changes should not reflect in main. Use pass by value.
void print(Node * head)
{
    Node * temp= head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteAtHead(Node *& head)
{//'delete' takes operand as the memory address which has to be deleted
    //delete temp where temp=NULL is not an error
    //delete NULL is an eroor
    if(head!=NULL)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
        return;        
    }
    return;
}

void deleteAtTail(Node *&head)
{   Node * tempHead=head;
    if (head!=NULL && head->next!=NULL)
    {
        while((tempHead->next)->next!=NULL)
        {
            tempHead=tempHead->next;
        }
        Node * temp=tempHead->next;
        tempHead->next=NULL;
        delete temp;
        return;
    }
    else if (head!=NULL)
    {
        delete head;
        head = NULL;
    }
    return;
}
void deleteInMiddle(Node * &head, int pos)
{
    if(pos>0)
    {
        if(findLinkedLength(head)==pos)
        {
            deleteAtTail(head);
            return;
        }
        else if (pos==1)
        {
            deleteAtHead(head);
            return;
        }
        else if(pos<findLinkedLength(head))
        {
            Node * temp=head;
            while(pos>2)
            {
                temp=temp->next;
                pos--;
            }
            Node*dTemp=temp->next;
            temp->next=dTemp->next;
            delete dTemp;
            return;
        }
    }
    return;
}
void buildList(Node *&head)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insertAtTail(head,data);
        cin>>data;
    }
    return;
}

// return type istrea& for cascading
istream& operator>>(istream &is, Node *& head)
{
 buildList(head); 
 return is;
}

ostream& operator<<(ostream &os, Node * head)
{
 print(head);
 return os;
}

void reverse(Node * &head)
{
    Node * p,*c,*n;
    p=NULL;
    c=head;
    
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}

Node * reverseRecursive(Node * head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node * smallHead= reverseRecursive(head->next);
    Node *c=head;
    c->next->next=c;
    c->next=NULL;
    return smallHead;
    
}

int midPoint(Node * head)
{
    if(head==NULL)
    {
        return -1;
        //-1 symbolises L.L is empty and no midpoint exists  
        // function should not return null to main as this will give runtime error NULL->data 
    }
    Node *fast=head->next, *slow=head;
    while(!((fast==NULL) || (fast->next==NULL)))
    {
        fast=(fast->next)->next;
        slow=slow->next;
    }
    return slow->data;
}

int findElementEnd(Node*head,int posEnd)
{
    if(head==NULL || posEnd==0)
    {
        return -1;
    }
    Node * slow=head, *fast=head;
    posEnd--;
    while(posEnd && fast->next!=NULL)
    {
        fast=fast->next;
        posEnd--;
    }
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow->data;
    
}

void mergeSortedLists(Node*&head1, Node*&head2)
{
    if(head1!=NULL && head2!=NULL)
    {   
        Node *ptr1=head1, *ptr2=head2;
        
        if(ptr1->data > ptr2->data)
        {
            head1=ptr2;
            ptr2=ptr2->next;
        }
        else
        {
            ptr1=ptr1->next;
        }
        Node*curr=head1;
        while(ptr1!=NULL && ptr2!=NULL)
        {
            if(ptr1->data>ptr2->data)
            {
                curr->next=ptr2;
                curr=ptr2;
                ptr2=ptr2->next;
            }
            else
            {
                curr->next=ptr1;
                curr=ptr1;
                ptr1=ptr1->next;  
            }
        }
        if(ptr2!=NULL)
        {
            curr->next=ptr2;
        }
        else if(ptr1!=NULL)
        {
            curr->next=ptr1;
        }
        curr=NULL;
        head2=NULL;
        ptr1=NULL;
        ptr1=NULL;
    }
    else if(head1==NULL)
    {
        head1=head2;
    }
    
}
int main()
{
    Node * head1=NULL;
    Node * head2=NULL;
    cin>>head1;
    cin>>head2;
    
    mergeSortedLists(head1,head2);
    cout<<head1;
    
    
    
    
    
    
    //cout<<head;
    
    //head=reverseRecursive(head);
    //cout<<head;
    //int midData=midPoint(head);
    //cout<<midData<<endl;
    
   // cout<<findElementEnd(head,7)<<endl;
    //cout<<findElementEnd(head,63)<<endl;
    //cout<<findElementEnd(head,0)<<endl;
    //cout<<findElementEnd(head,4)<<endl;
    
    //cout<<*mid;
    //cout<<head2;
    // buildList(head);
    // print(head);
    
    
    /*
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtTail(head,6);
    insertInMiddle(head,2,3);
    
    print(head);
    */
    /*
    if(searchRecursive(head,6))
    {
        cout<<"recursiveSearch: Element is present"<<endl;
    }
    else
    {
        cout<<"recursiveSearch: Element is not present"<<endl;
    }
    
    if(searchIterative(head,5))
    {
        cout<<"iterativeSearch: Element is present"<<endl;
    }
    else
    {
        cout<<"iterativeSearch: Element is not present"<<endl;
    }
    
    */
    
    /*
    deleteInMiddle(head,3);
    print(head);
    deleteAtTail(head);
    print(head);
    deleteAtHead(head);
    print(head);
    deleteInMiddle(head,2);
    print(head);
    */
    return 0;    
}
