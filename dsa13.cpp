#include<iostream>
using namespace std;
struct node
{
    int item;
    node* prev;
    node* next;
}
class priorityQueue
{
    private:
int *front,*rear ;
int size;

public:
priorityQueue();



};

priorityQueue::priorityQueue()
{
    front=rear=nullptr;
    size=0;
};


void priorityQueue:: insert