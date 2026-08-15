#include<stdio.h>
using namespace std;
#define EMPTY_QUEUE 1

struct node
{

int item;
node *next;
};
class Queue
{
    private:
    
    int *front , *rear;
    int size;

    public:
    Queue();
 void insert(int);
int getFront();
int getRear();
void delete();
~Queue();
int getSize();

    
};


Queue::Queue()
{
    front=rear=nullptr;
    size=0;

}

void Queue::insert (int data)
{
    node *n=new node;
    n->item=data;
    n->next=nullptr;
    if(rear==nullptr)
   {
    front=n;
    rear=n;
   }

   else
   {
    rear->next=n;
    rear=n;
   }
size++;

}

int Queue::getFront()
{
    if(front==nullptr)
    throw EMPTY_QUEUE;
    return front->item;
}

int Queue::getRear()
{
    if(rear==nullptr)
    throw EMPTY_QUEUE;
    return rear->item;
}

void Queue::delete()
{
    node *t;
    if(front==nullptr)
    throw EMPTY_QUEUE;

    if(rear==front)
    {
        delete front;
        rear=front=nullptr;

    }
    else{
        t->front;
        front = front->next;
        delete t;
    }
    size--;
}



Queue::~Queue()
{
    while(front!=nullptr)
    delete();
}


int Queue::getSize()
{
    return Size;
}