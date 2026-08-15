#include<iostream>
using namespace std;

class Heap
{
private:
    int capacity;
    int lastIndex;
    int *ptr;


public:
Heap(int);

 
};

Heap::Heap(int cap)

{
capacity=cap;  // Stores total size of heap array
lastIndex=-1;  // Heap is empty initially
ptr=new int[capacity];   // Dynamically creates array of size = capacity
    // Memory allocated at runtime

}


//CANT UNDERSTANND THIS ASSIGNMENT 