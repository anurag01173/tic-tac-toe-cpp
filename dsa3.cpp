
#include<iostream>
using namespace std ;

#define INVALID_CAPACITY 1
#define DYNAMIC_ARRAY_NOT_CREATED 2
#define INVALID_INDEX 3
#define DYNAMIC_UNDERFLOW 4
class DnyArray
{
    private:
    int capacity;
    int lastIndex;
    int *ptr;

protected:
void doubleArray();
void halfArray();


    public:
    
     ~DnyArray();
    DnyArray(int);
     int getCapacity(); 
     bool isEmpty();
     void append(int);
     bool isFull();
     void insert(int,int);
     void edit(int , int );
     void del(int);
     
     int get(int); 
     int count();
     int find(int) ;
};

DnyArray::DnyArray(int cap)
{
    ptr=nullptr;
    if(cap<1)
    throw INVALID_CAPACITY;
     capacity = cap;
     lastIndex = -1;
     ptr = new int[capacity];
}


void DnyArray::doubleArray()
{
    int *temp = new int[capacity*2];
    for(int i=0; i<=lastIndex; i++)
    temp[i]=ptr[i];
    delete []ptr ;

    ptr=temp;
    capacity *=2;
}

void DnyArray::halfArray()
{
    int *temp=new int[capacity/2];
    for(int i=0; i<=lastIndex; i++)
    temp[i] = ptr[i];
    delete []ptr;

    ptr= temp;
    capacity /=2;
}


int DnyArray::getCapacity()
{
    if(ptr==nullptr)
    throw DYNAMIC_ARRAY_NOT_CREATED;

    return capacity;
}

bool DnyArray::isEmpty()
{
    if(ptr==nullptr)
    throw DYNAMIC_ARRAY_NOT_CREATED;

    return lastIndex==-1;
}

void DnyArray:: append(int data)
{
    if(ptr==nullptr)
    throw DYNAMIC_ARRAY_NOT_CREATED;

    if(isFull())
    doubleArray();

    lastIndex++;
    ptr[lastIndex]=data;
}

bool DnyArray::isFull()
{
    if(ptr==nullptr)
    throw DYNAMIC_ARRAY_NOT_CREATED;

    return lastIndex+1==capacity;
}

void DnyArray::insert(int data, int index)
{
    if(ptr==nullptr)
    throw DYNAMIC_ARRAY_NOT_CREATED;

    if(index<0||index>lastIndex+1)
    throw INVALID_INDEX;

    if(isFull())
    doubleArray();

    for(int i=lastIndex ; i>=index; i--)
    ptr[i+1]=ptr[i];

    ptr[index]=data;
    lastIndex++;
}

void DnyArray::edit(int index, int data)
{
    if(ptr==nullptr)
    throw DYNAMIC_ARRAY_NOT_CREATED;
    if(index<0 || index>lastIndex)
    throw INVALID_INDEX;

    ptr[index]=data;
}

void DnyArray:: del(int index)
{
    if(ptr==nullptr)
    throw DYNAMIC_ARRAY_NOT_CREATED;
    if(isEmpty())
    throw DYNAMIC_UNDERFLOW;

    if(index<0 || index>lastIndex)
    throw INVALID_INDEX;
for(int i=index+1;i<=lastIndex;i++)
ptr[i-1]=ptr[i];
lastIndex--;

if(capacity>1&& (lastIndex+1 == capacity/2))
halfArray();

}

int DnyArray::get(int index)
{
    if(ptr==nullptr)
    throw DYNAMIC_ARRAY_NOT_CREATED;

    if(index<0 || index>lastIndex)
    throw INVALID_INDEX;
    return ptr[index];
}


int DnyArray::count()
{
    if(ptr==nullptr)
    throw DYNAMIC_ARRAY_NOT_CREATED;

    return lastIndex+1;
}


DnyArray::~DnyArray()
{
    if(ptr!=nullptr)
    delete []ptr;
}

int DnyArray::find(int data)
{
    if(ptr==nullptr)
    throw DYNAMIC_ARRAY_NOT_CREATED;

    for(int i=0;i<=lastIndex;i++)
    if(ptr[i]==data)
    return i;

    return -1;
}

