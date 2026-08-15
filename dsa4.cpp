#include<iostream>
using namespace std;



struct node
{
    int item;
    node *next;
};
class SLL
{
private:

node *start; //start pointer of type node

public:
SLL();
void insertAtstart(int);
void insertAtalast(int);
node* search(int);

//AUR SAAB BHI HOGA




};

SLL::SLL()
{
    start=nullptr;

}
void SLL::insertAtstart(int data)
{
    node *n= new node;
    n->item=data;
    n->next=start;
start=n;
}


void SLL::insertAtalast(int data)
{
    node *n= new node;
    n->item=data;
    n->next=nullptr;
    if(start==nullptr)
    start=n;

    else{
        node *temp= start;
        while(temp->next!=nullptr)
        temp=temp->next;
        temp->next=n;
    }
}


node* SLL::search(int data)
{
if(start==nullptr)
return nullptr;

node* temp=start;
while (temp!=nullptr)
{
    if(temp->item==data)
    return temp;
    temp = temp->next;
}
return nullptr;

}



void SLL::insertAfter(node *t, int data)
{
    if(t!=nullptr)
    {
        node *n=new node;
        n->item=data;
        n->next=t->next;
        t->next=n;
    }
}
void SLL::deleteFirst()
{
    if(start==nullptr)
        throw LINK_LIST_UNDERFLOW;
    node *temp=start;
    start=start->next;
    delete temp;

}
void SLL::deleteLast()
{
    if(start==nullptr)
        throw LINK_LIST_UNDERFLOW;
    if(start->next==nullptr)
    {
        delete start;
        start=nullptr;
    }
    else
    {
        node *temp=start;
        while(temp->next->next!=nullptr)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    }
}


//KUCH SAMAJH ME NAHI AARAHA HAI//