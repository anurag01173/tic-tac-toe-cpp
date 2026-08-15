#include<stdio.h>
using namespace std;

struct node{

    node* prev;
    int item;
    node* next;
}

class CDLL 
{
    private:
    node* start;

    public:
    CDLL();
    void insertAtstart(int);
    void insertAtlast(int);
    node*  search(int);
    void deleteLast();
    void deleteNode(int data)

}

CDLL::~CDLL()
{
    start=nullptr;
}

void CDLL:: insertAtstart(int data)
{
    node* n=new node;
    n->item=data;
    if(start==nullptr)
    {
        n->prev=n;
        n->next=n;
        start=n;
    }else {
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;   //NAHI SAMAJH ME AAYA 
        start=n;          //NAHI SAMAJH ME AAYA 
    }
}





void  CDLL::insertAtlast(int data)
{
    node* n=new node;
    n->item=data;
    if(start==nullptr)
    {
        n->prev=n;
        n->next=n;
        start=n;

    }
    else 
    {
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;

    }
}


node* CDLL:: search(int data)
{
    if(start==nullptr)
    return nullptr;
    node* temp = start;
    do{
        if(temp->item==data)
        return temp;
        temp=temp->next
    }  while(temp!=start)
    return nullptr;
}





void CDLL::deleteLast()
{
    if(start!=nullptr)
    {
        if(start->next==start)
        {
            delete start;
            start=nullptr;
        }
        else
        {
            node* t=start->prev;
            t->prev->next=start;
            start->prev=t->prev;
            delete t;
        }
    }
}





void CDLL::deleteNode(int data)
{
    node *t=search(data);
    if(t!=nullptr)
    {
        if(t==start)
            deleteFirst();
        else
        {
            t->next->prev=t->prev;
            t->prev->next=t->next;
            delete t;
        }
    }
}





CDLL::~CDLL()
{
    while(start!=nullptr)
        deleteFirst();
}





