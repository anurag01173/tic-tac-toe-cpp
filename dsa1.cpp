#include<iostream>
using namespace std;

// class Array
// {
// private:
//     int capacity;
//     int lastIndex;
//     int *ptr;


// };


//--------------------------------------------------





// #define INVALID_CAPACITY 1

// class Array
// {
// private:
//     int capacity;
//     int lastIndex;
//     int *ptr;

// public:
//     Array(int c)
//     {

//         ptr = nullptr;
//         if(c<1)
//         throw INVALID_CAPACITY;
//         capacity = c;
//         lastIndex = -1;
//         ptr = new int[capacity];
//     }
// };



//--------------------------------------------------







// #define INVALID_CAPACITY 1
// #define ARRAY_NAME_NOT_CREATED 2

// class Array
// {
// private:
//     int capacity;
//     int lastIndex;
//     int *ptr;

// public:
//     Array(int c)
//     {

//         ptr = nullptr;
//         if(c<1)
//         throw INVALID_CAPACITY;
//         capacity = c;
//         lastIndex = -1;
//         ptr = new int[capacity];
//     }

//     bool isEmpty()
//     {
//         if (ptr==nullptr)
//         throw ARRAY_NAME_NOT_CREATED;

//         return lastIndex ==-1;

//     } 
// };

//--------------------------------











#define INVALID_CAPACITY 1
#define ARRAY_NAME_NOT_CREATED 2
#define ARRAY_OVERFLOW 3
#define INVALID_INDEX 4
#define ARRAY_UNDERFLOW 5

class Array
{
private:
    int capacity;
    int lastIndex;
    int *ptr;

public:
Array(int);
void createArray(int);
bool isEmpty();
void append(int);
bool isFull();
void insert(int , int );
void edit(int ,int);
void del(int);
int get(int);
int count();
virtual ~Array();
int find(int);

};

    Array::Array(int c)   //Ye constructor valid size ka dynamic array create karta hai aur lastIndex=-1 set karke array ko empty initialize karta hai.
    {

        ptr = nullptr; //ka matlab hai pointer abhi kisi memory location ko point nahi kar raha hai, yani abhi array create nahi hua.
        if(c<1)
        throw INVALID_CAPACITY;
        capacity = c;
        lastIndex = -1;
        ptr = new int[capacity];
    }



    //Ye function given size ka naya dynamic array create karta hai, purana array delete karta hai, aur lastIndex=-1 karke array ko empty initialize karta hai
    void Array::createArray(int c)   
    {
        if(c<1)
        throw INVALID_CAPACITY;
        if(ptr!=nullptr)
        delete []ptr;
        capacity=c;
        lastIndex=-1;
        ptr=new int[capacity];
    }
    bool Array:: isEmpty()
    {
        if (ptr==nullptr)
        throw ARRAY_NAME_NOT_CREATED;

        return lastIndex ==-1;

    } 
    void Array::append(int data)
    {
        if (ptr==nullptr)
        throw ARRAY_NAME_NOT_CREATED;

        if(isFull())
        throw ARRAY_OVERFLOW;
        lastIndex++;
        ptr[lastIndex]=data;

    }

    bool Array::isFull()
    {
        if (ptr==nullptr)
        throw ARRAY_NAME_NOT_CREATED;
        return lastIndex+1==capacity;
    } 
    //capacity → array ka total size
//lastIndex → last filled element ka index
//ptr → array ka base address //

     void Array:: insert(int index, int data )
     {
         if (ptr==nullptr)
         throw ARRAY_NAME_NOT_CREATED;

         if (isFull())
         throw ARRAY_OVERFLOW;
         if(index<0|| index>lastIndex+1)
         throw INVALID_INDEX;
         for(int i=lastIndex;i>=index;i--)
         ptr[i+1]=ptr[i];
         ptr[index]=data;
         lastIndex++;
     }
     void Array:: edit(int index , int newdata )
     {
        if(ptr==nullptr)
        throw ARRAY_NAME_NOT_CREATED;
        if(index<0||  index>lastIndex+1)
        throw INVALID_INDEX;
        ptr[index]=newdata;
     }

void Array::del(int index)
{
    if(ptr==nullptr)
    throw ARRAY_NAME_NOT_CREATED;

    if(isEmpty())
    throw ARRAY_UNDERFLOW;

    if(index<0 || index>lastIndex)
    throw INVALID_INDEX;

    for(int i=index+1;i<=lastIndex;i++)
    ptr[i-1]=ptr[i];
    lastIndex--;
}





int Array::get(int index)
{
    if(ptr==nullptr)
    throw ARRAY_NAME_NOT_CREATED;

    if(index < 0 || index > lastIndex)
    throw INVALID_INDEX;

    return ptr[index];
}


int Array::count()
{
    if(ptr==nullptr)
    throw ARRAY_NAME_NOT_CREATED;

    return lastIndex+1;

}


Array::~Array()
{
      if(ptr!=nullptr)
 delete []ptr;
}


int  Array::find(int data)
{
    if(ptr==nullptr)
throw ARRAY_NAME_NOT_CREATED;

for(int i=0;i<=lastIndex;i++)
if (ptr[i]==data)
return i;

return -1;

}