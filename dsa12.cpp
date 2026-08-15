#include<iostream>
using namespace std;


struct node;
{
    int item;
    node* prev;
    node* next;
};

class Deque
{
private:
int *rear;
int *front,size;

public:
Deque();





};

Deque::Deque()
{
    front=rear=nullptr;
    size=0;
}

