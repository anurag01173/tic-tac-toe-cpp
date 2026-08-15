#include<iostream>
using namespace std;


struct node
{
    node *prev;
    int item;
    node *next;
};

class DLL
{
    private:
    node *start;

    public:
    DLL(){
        start=nullptr;
} 
    
    void insertAtstart(int data);
    void insertAtlast(int data); 
    node* search(int data);
void insertAfter(node *temp,int data) ;
    
};

void DLL::insertAtstart(int data)
{
node* n= new node;
n->item=data;
n->prev=nullptr;
n->next=start;
if(start!=nullptr)
start->prev=n;
start=n;
}

 void DLL::insertAtlast(int data)
 {
    node* n=new node;
    n->item=data;
    n->next=nullptr;
    if(start==nullptr)
    {
        n->prev=nullptr;
        start=n;
    }else {
        node *temp;
        temp=start;
        while (temp->next!=nullptr)
        {
           temp=temp->next;
        }
        n->prev=temp;
     temp->next=n;
    }
    
 } 
 node* DLL::search(int data)
 {
    node* temp;
    if(start==nullptr)
    return nullptr;
    temp=start;
    while(temp!=nullptr)
    {
        if(temp->item==data)
        return temp;
        temp= temp->next;
    }
    return nullptr;

 }









void DLL::insertAfter(node *temp,int data)   //can't understand 
{
    if(temp!=nullptr)
    {
        node *n=new node;
        n->item=data;
        n->next=temp->next;
        n->prev=temp;
        if(temp->next!=nullptr)
            temp->next->prev=n;
        temp->next=n;
    }
}


