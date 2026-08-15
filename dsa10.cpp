#include<stdio.h>
using namespace std
#define INVALID_QUEUE 0
#define INVALID_CAPACITY 1
#define QUEUE_OVERFLOW 2
#define QUEUE_UNDERFLOW 3

class Queue
{
private:
int capacity;
int front;
int  rear ;
int *ptr;

public:
Queue(int);
void insert(int);




};

Queue::Queue(int cap)
{
ptr = nullptr;
if(cap<1)
throw  INVALID_CAPACITY;
capacity=c;
front=-1;
rear=-1;
ptr=new int[capacity];
}






void Queue::insert(int data)
{
    if(ptr==nullptr)
        throw INVALID_QUEUE;
    if(isFull())
        throw QUEUE_OVERFLOW;
    if(rear==-1)
    {
        front=0;
        rear=0;
        ptr[rear]=data;
    }
    else if(rear+1==capacity)
    {
        rear=0;
        ptr[rear]=data;
    }
    else
    {
        rear++;
        ptr[rear]=data;
    }  
}



int Queue::getFront()
{
    if(ptr==nullptr)
        throw INVALID_QUEUE;
    if(isEmpty())
        throw QUEUE_UNDERFLOW;
    return ptr[front];
}






int Queue::getRear()
{
    if(ptr==nullptr)
        throw INVALID_QUEUE;
    if(isEmpty())
        throw QUEUE_UNDERFLOW;
    return ptr[rear];
}




void Queue::remove()
{
    if(ptr==nullptr)
        throw INVALID_QUEUE;
    if(isEmpty())
        throw QUEUE_UNDERFLOW;
    if(front==rear)
        front=rear=-1;
    else if(front+1==capacity)
        front=0;
    else
        front++;
}


Queue::~Queue()
{
    if(ptr!=null)
        delete []ptr;
}





bool Queue::isFull()
{
    if(ptr==nullptr)
        throw INVALID_QUEUE;
    return rear+1==front||(front==0 && rear+1==capacity);
}



bool Queue::isEmpty()
{
    if(ptr==nullptr)
        throw INVALID_QUEUE;
    return front==-1;
}




int Queue::count()
{
    if(ptr==nullptr)
        throw INVALID_QUEUE;
    if(isEmpty())
        return 0;
    if(rear>=front)
        return rear-front+1;
    else
        return capacity- (front-rear)+1;
}