#include<iostream>
using namespace std;








// template <typename X>
// class Array
// {
// private:
//     int capacity;
//     int lastIndex;
//     X *ptr;

// public:
// // Constructor
// Array(int );

//  // Copy Constructor
// Array(Array<X> &);


//     // Functions
//     bool isEmpty();
 
// void append(X);
// bool isFull();
// void insert(int , X );
// void edit(int ,X);
// void del(int);
// X get(int);
// int count();

// int  find(X);

// int getcapacity();


//   // Assignment Operator
// void operator=(Array<X> &);




// //destructor
// ~Array();

// };



// // Constructor
// template<typename X>
//  Array<X>::Array(int  cap)
//     {

//         capacity = cap;
//         lastIndex = -1;
//         ptr = new X[capacity];
//     }


//     // Copy Constructor
//     template<typename X>
//     Array<X>::Array(Array<X> &arr)
//     {
        
//         capacity=arr.capacity;
//         lastIndex=arr.lastIndex;
//         ptr=new x[capacity];

//         for(int i=0;i<=lastIndex; i++)
//         ptr[i]=arr.ptr[i];
//     }


//     template<typename X>
//     bool Array<X>:: isEmpty()
//     {
//         return lastIndex ==-1;
//     } 





// template<typename X>
//     void Array<X>::append(X data)
//     {
       

//         if(isFull())
//         cout<<"Array is full "<<endl;

//         else {
//         lastIndex++;
//         ptr[lastIndex]=data;
//         }

//     }
// template<typename X>
//     bool Array<X>::isFull()
//     {
//         return lastIndex ==capacity - 1;
//     } 
//     //capacity → array ka total size
// //lastIndex → last filled element ka index
// //ptr → array ka base address //







// template<typename X>
//      void Array<X>:: insert(int index, X data )
//      {
        
//          if (isFull())
//         cout<<"Array is full "<<endl;
//         else if(index<0|| index>lastIndex+1)
//        cout<<"invalid index "<<endl;

//        else 
//        {
//          for(int i=lastIndex;i>=index;i--)
//          ptr[i+1]=ptr[i];
//          ptr[index]=data;
//          lastIndex++;
//      }
//     }



//     template<typename X>
//      void Array<X>:: edit(int  index , X data )
//      {
       
//         if(index>=0 &&  index<=lastIndex)
//         ptr[index]=data;
//         else 
//         cout<<"invalid index"<<endl;
//      }


//      template<typename X>
// void Array<X>::del(int index)
// {
    

//     if(isEmpty())
//     cout<<"array is empty"<<endl;

//     if(index<0 || index>lastIndex)
//     cout<< "INVALID_INDEX"<<endl;

//     else {
//     for(int i=index;i<lastIndex;i++)
//     ptr[i]=ptr[i+1];
//     lastIndex--;
//     }
// }




// template<typename X>
// X Array<X>::get(int index)
// {
//     if(index >= 0 && index <= lastIndex)
// return ptr[index];

// cout<<"invalid index"<<endl;
// throw 1;    ///   ye 1 dega agar nahi hua toh
// }





// template<typename X>
// int  Array<X>::count()
// {
//     return lastIndex+1;
// }




// template<typename X>
// int  Array<X>::find(X data)
// {
// for(int i=0;i<=lastIndex;i++)
// {
// if (ptr[i]==data)
// return i;
// }

// return -1;

// }

// //getcapacity
// template<typename X>
// int Array<X> ::getcapacity()
// {
// return capacity;
// }




// //DESTRUCTOR 
// template<typename X>
// Array<X>::~Array()
// {
// delete []ptr;
// }




// int main()
// {
//     Array<int> a1(5);

//     a1.append(10);
//     a1.append(20);
//     a1.append(30);

//     a1.insert(1,50);



//     cout<<"elements are:"<<endl;


//     for(int i=0;i<a1.count();i++)
//     cout<<a1.get(i)<<" ";

//     return 0;

// }














// //DYNAMIC ARRAY 
// template<typename X>
// class DnyArray
// {
//     private:
//     int capacity;
//     int lastIndex;
//     X *ptr;

// protected:
// void doubleArray();
// void halfArray();


//     public:
    
//      ~DnyArray();
//     DnyArray(int);
//      int getCapacity(); 
//      bool isEmpty();
//      void append(X);
//      bool isFull();
//      void insert(X,int);
//      void edit(int , X );
//      void del(int);
     
//      X get(int); 
//      int count();
//      int find(X) ;
// };
// template<typename X>
// DnyArray<X>::DnyArray(int cap)
// {
   
    
//      capacity = cap;
//      lastIndex = -1;
//      ptr = new X[capacity];
// }

// template<typename X>
// void DnyArray<X>::doubleArray()
// {
//     X *temp = new X[capacity*2];
//     for(int i=0; i<=lastIndex; i++)
//     temp[i]=ptr[i];
//     delete []ptr ;  // purani memory delete kar di.
 
//     ptr=temp;   ////ptr ab naye bade array ko point karega.
//     capacity *=2;
// }


// template<typename X>
// void DnyArray<X>::halfArray()
// {
//     X *temp=new X[capacity/2];
//     for(int i=0; i<=lastIndex; i++)
//     temp[i] = ptr[i];
//     delete []ptr; // purani memory delete kar di.

//     ptr= temp;    //ptr ab naye bade array ko point karega.
//     capacity /=2;
// }



// template<typename X>
// int DnyArray<X>::getCapacity()
// {
//     return capacity;
// }

// template<typename X>
// bool DnyArray<X>::isEmpty()
// {
//     return lastIndex==-1;
// }


// template<typename X>
// bool DnyArray<X>::isFull()
// {
//     return lastIndex+1==capacity;
// }



// template<typename X>
// void DnyArray<X>:: append(X data)
// {
//     if(isFull())
//     doubleArray();

//     lastIndex++;
//     ptr[lastIndex]=data;
// }



// template<typename X>
// void DnyArray<X>::insert(X data, int index)
// {
    

//     if(index<0||index>lastIndex+1)   // insesrtion last index taak bhi valisd hai
//    cout<<endl<<"Invalid Index";

//     if(isFull())
//     doubleArray();

//     for(int i=lastIndex ; i>=index; i--)
//     ptr[i+1]=ptr[i];

//     ptr[index]=data;
//     lastIndex++;
// }



// template<typename X>
// void DnyArray<X>::edit(int index, X data)
// {
    
//     if(index<0 || index>lastIndex)
//       cout<<endl<<"Invalid Index";

//     ptr[index]=data;
// }



// template<typename X>
// void DnyArray<X>:: del(int index)
// {
   
//     if(isEmpty())
//     cout<<"aray is empty"<<endl;

//     if(index<0 || index>lastIndex)
//     cout<<endl<<"Invalid Index";
//  for(int i=index;i<lastIndex;i++)
//         ptr[i]=ptr[i+1];

//     lastIndex--;

// if(capacity>1&& (lastIndex+1 == capacity/2))
// halfArray(); //halfArray() check isliye kiya jata hai taaki delete ke baad 
// //agar array aadha empty ho jaye,
//  //to extra unused memory hata kar capacity half ki ja sake.

// }

// template<typename X>
// X DnyArray<X>::get(int index)
// {
  

//     if(index<0 || index>lastIndex)
//    cout<<endl<<"Invalid Index";
//     return ptr[index];
// }


// template<typename X>
// int  DnyArray<X>::count()
// {
//     return lastIndex+1;
// }





// template<typename X>
// int DnyArray<X>::find(X data)
// {
   
// for(int i=0;i<=lastIndex;i++){
//     if(ptr[i]==data)
//     return i;
//     }
//     return -1;
// }




// // Destructor
// template <typename X>
// DnyArray<X>::~DnyArray()
// {
//     delete []ptr;
// }




// //main function 

// int main()
// {
//     DnyArray<int> d1(2);

//     d1.append(50);
//     d1.append(90);
//     d1.append(1000);


//     d1.insert(4,2);

//     cout<<"elements are"<<endl;

//     for(int i=0;i<d1.count();i++)
//     cout<<d1.get(i)<<" ";

//     cout<<endl;

//     cout<<"capacity"<<d1.getCapacity();

//     return 0;
    
// }

//  end Dnynamic Array










// /* Start: Linked List */

// template<typename X>
// struct node
// {
//     X item ;
//     node<X> *next;
// };
// template <typename X>
// class SLL
// {

//     private:
    
//         node<X> *start;


//     public:
// SLL();
// void insertAtstart(X);
// void insertAtlast(X);

// node<X>* search(X);
// void insertAfter(node<X>*, X);

// void deleteFirst();
// void deleteLast();
// void deletespecificnode(node<X>* );



// node<X>* getFirstNode();
//   // Destructor
//     ~SLL();


//     };


// template<typename X>
//     SLL<X>::SLL()
//     {
// start=NULL;
//     }


// template<typename X>
// void SLL<X>:: insertAtstart(X data)
// {
//     node<X> *n=new node<X>;

//     n->item=data;
//     n->next=start;

//     start=n;
// }


// template<typename X>
// void SLL<X>:: insertAtlast(X data)
// {
//     node<X>  *t;
//     node<X> *n=new node<X>;

//     n->item=data;
//     n->next=NULL;

//     if(start==NULL)
//     start=n;

//     else
//     {
//        t= start;
//         while(t->next!=NULL)
//         t=t->next;

//         t->next=n;

//     }
// }


// template<typename X>
// node<X>* SLL<X>:: search(X data)  //Yha SEMICOLON NAHI LAGTA HAI
// {
//     node<X>  *t;
//     t=start;

//     while(t!=NULL)
//     {
//         if(t->item==data)
//         return t;

//         t=t->next;
//     }
// return NULL;
// }





// template<typename X>
// void SLL<X>:: insertAfter(node<X> *ptr, X data)
// {
// node<X> *n= new node<X>;
// n->item=data;
// n->next=ptr->next;

// ptr->next=n;
// }


// template<typename X>
// void SLL<X>:: deleteFirst()
// {
//     node<X> *t;
//     if(start)
//     {
//         t=start;
//         start=start->next;
//         delete t;
//     }
// }




// template<typename X>
// void SLL<X>:: deleteLast()
// {

//     node<X> *t;
// if(start==NULL)
// cout<<"linked list is empty "<<endl;

// else if(start->next==NULL)
// {
//     delete start;
//     start=NULL;
// }


// else 
// {
//     t=start;
//     while(t->next->next!=NULL)
//     t=t->next;
//     delete t->next;

//     t->next=NULL;

// }
// }





// template<typename X>
// void SLL<X>::deletespecificnode(node<X> *temp )
// {
//     node<X> *t;
//     if(start==NULL)
//     cout<<"linked list is empty"<<endl;

//     else if(start==temp)
//     {
//         start=temp->next;
//         delete temp;
//     }

//     else {
// t=start;
// while(t->next!=temp)
// t=t->next;

// t->next=temp->next;
// delete temp;
//     }

// }





// template <typename X>
// node<X>* SLL<X>::getFirstNode()
// {
//     return start;
// }




// // Destructor
// template <typename X>
// SLL<X>::~SLL()
// {
//     while(start)
//         deleteFirst();
// }






// // Main Function
// int main()
// {
//     SLL<int> l1;

//     l1.insertAtstart(10);
//     l1.insertAtstart(20);

//     l1.insertAtlast(30);

//     node<int> *p=l1.search(10);

//     l1.insertAfter(p,50);

//     node<int> *t;

//     t=l1.getFirstNode();

//     cout<<"Linked List Elements:"<<endl;

//     while(t!=NULL)
//     {
//         cout<<t->item<<" ";

//         t=t->next;
//     }

//     return 0;
// }



//  linked list











// //doubly linked list

// #include<iostream>
// using namespace std;




// template <typename X>
// struct node
// {
//    node<X> *prev;
//     X item;
//     node<X> *next;
// };


// template <typename X>
// class DLL
// {
//     private:
//     node<X> *start;

//     public:
//     // Constructor
//     DLL();
    

//      // Member Functions
//     void insertAtstart(X);
//     void insertAtlast(X); 
//     node<X>* search(X);
// void insertAfter(node<X>*,X) ;


// void deleteFirst();
//     void deleteLast();

//     void deleteNode(node<X>*);


//      // Destructor
//     ~DLL();
    
// };


// // Constructor
// template <typename X>
// DLL<X>::DLL()
// {
//     start=NULL;
// }



// // Insert At Start
// template <typename X>
// void DLL<X>::insertAtstart(X data)
// {
    
// node<X> *n= new node<X>;
// n->item=data;
// n->prev=nullptr;
// n->next=start;
// if(start!=nullptr)
// start->prev=n;
// start=n;
// }



// template <typename X>
//  void DLL<X>::insertAtlast(X data)
//  {
//     node<X> *n= new node<X>;
//     n->item=data;
//     n->next=nullptr;
//     if(start==nullptr)
//     {
//         n->prev=nullptr;
//         start=n;  
//     }else {
//         node<X> *temp;
//         temp=start;
//         while (temp->next!=nullptr)
//         {
//            temp=temp->next;
//         }
//         n->prev=temp;
//      temp->next=n;
//     }
    
//  } 






// template <typename X>
//  node<X>* DLL<X>::search(X data)
//  {
//     node<X>* temp;
//     if(start==nullptr)
//     return nullptr;
//     temp=start;
//     while(temp!=nullptr)
//     {
//         if(temp->item==data)
//         return temp;
//         temp= temp->next;
//     }
//     return nullptr;
//  }






// template <typename X>
// void DLL<X>::insertAfter(node<X> *temp,X data)   //can't understand 
// {
//     if(temp!=nullptr)
//     {
//         node<X> *n=new node<X>;
//         n->item=data;
//         n->next=temp->next;   //cant understand meaning 
//         n->prev=temp;
//         if(temp->next!=nullptr)
//             temp->next->prev=n;
//         temp->next=n;
//     }
// }



// template <typename X>
// void DLL<X>::deleteFirst()
// {
//     if(start)
//     {

//     node<X> *t=start;

//     start=start->next;
//     if(start!=nullptr)
//     start->prev=nullptr;
//     delete t;
//     }
    
// }


// // Destructor
// template<typename X>
// DLL<X>::~DLL()
// {
// while(start)
// deleteFirst();
// }




// int main()
// {
//     DLL<int> d1;

//     d1.insertAtstart(10);
//     d1.insertAtstart(20);

//     d1.insertAtlast(30);

//     node<int> *p=d1.search(10);

//     d1.insertAfter(p,50);

//     cout<<"Doubly Linked List Created";

//     return 0;
// }










// //stack using linked list


// template <typename X>
// struct node
// {
//     X item;
//     node<X> *next;
// };

// template <typename X>
// class stack
// {
// private:
// node<X> *top;

// public:
//  stack();
//         stack(stack<X>&);
//         void push(X);
//         bool isEmpty();
//         X peek();
//         void pop();
//         ~stack();
//         void reverse();
//         stack<X>& operator=(stack<X> &S);


// };

// // Constructor
// template <typename X>
// stack<X>::stack()
// {
//     top=NULL;
// }


// template <typename X>
// stack<X>& stack<X>::operator=(stack<X> &S)    //NAHI SAMJHA MAI
// {
//     node<X> *t,*n,*p=NULL;
//     t=S.top;
//     while(t)
//     {
//         n=new node<X>;
//         n->item=t->item;
//         if(top==NULL)
//             top=n;
//         else
//             p->next=n;
//         t=t->next;
//         p=n;
//     }
//     if(p!=NULL)
//         p->next=NULL;
//     return *this;
// }

// template <typename X>
// void stack<X>::reverse()  //NAHI SAMJHA MAI
// { 
//     node<X> *t1,*t2;
//     if(top && top->next)
//     {
//         t2=NULL;
//         do
//         {
//             t1=top;
//             top=top->next;
//             t1->next=t2;
//             t2=t1;
//         } while (top->next!=NULL);
//         top->next=t1;
//     }
// }


// template <typename X>
// stack<X>::~stack()
// {
//     while(top)
//         pop();
// }


// template <typename X>
// void stack<X>::pop()
// {
//     node<X> *r;
//     if(isEmpty())
//         cout<<"\nStack Underflow";
//     else
//     {
//         r=top;
//         top=top->next;
//         delete r;
//     }
// }

// template <typename X>
// X stack<X>::peek()
// {
//     if(top==NULL)
//     {
//         cout<<"\nStack is empty";
//         return -1;
//     }
//     else
//         return top->item;
// }

// template <typename X>
// bool stack<X>::isEmpty()
// {
//     return top==NULL;
// }


// template <typename X>
// void stack<X>::push(X data)
// {
//     node<X> *n;
//     n=new node<X>;
//     n->item=data;
//     n->next=top;
//     top=n;
// }




// int main()
// {
//     stack<int> s1;

//     s1.push(10);
//     s1.push(20);
//     s1.push(30);

//     cout<<"top element"<<s1.peek()<<endl;
//     s1.pop();

//     cout<<"after pop= "<<s1.peek()<<endl;

//     return 0;
// }







/* Start: Queue using Arrays */

template <typename X>
class Queue
{
private:
int capacity;
int front, rear;
X* ptr;


public:

//contructor 
Queue(int);
//copy contructor
Queue(Queue<X> &);

Queue<X>& operator=(Queue<X> &);

bool isEmpty();
bool isFull();

void insert(X);
void del();

X getfront();
X getrear();

int count();
~Queue();


};


//contructor 
template<typename X>
Queue<X>::Queue(int cap)
{
    capacity = cap;
    front=-1;
    rear=-1;
    ptr=new X[capacity];
}

//copy contructor
template<typename X>
Queue<X>::Queue(Queue<X> &Q)
{
    capacity=Q.capacity;

    front=Q.front;
    rear=Q.rear;

    ptr=new X[capacity];
    

    int n=Q.count();
    int i=Q.front();

    while(n)
    {
        ptr[i]=Q.ptr[i];
     if(i==capacity-1)
     i=0;
    
     else
     i++;
     n--;

    }

}

//Assignment operator
template<typename X>
Queue<X>& Queue<X> ::operator=(Queue<X> &Q)
{
    capacity=Q.capacity;

      front=Q.front;
    rear=Q.rear;
 
    if(ptr!=nullptr)
    delete []ptr;

    ptr=new X[capacity];

   int n=Q.count();   //count ek function hai jo queue me total elements batata hai.
    int i=Q.front;     //front variable hai function nahi

while(n)
    {
        ptr[i]=Q.ptr[i];

        if(i==capacity-1)
            i=0;

        else
            i++;

        n--;
    }

    return *this;
}

template<typename X>
bool Queue<X>::isEmpty()
{
    return rear==-1;
}


template<typename X>
bool Queue<X>::isFull()
{
    return (front&&rear==capacity-1) || (rear+1 == front);
} 

template<typename X>
void Queue<X>::insert(X data)
{
    if(isFull())
    cout<<"Queue overflow "<<endl;

    else if(isEmpty())
    {
        front=rear=0;
        ptr[rear]=data; 
    }

    else if(rear==capacity-1)
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

template<typename X>
void Queue<X>::del()
{
    if(isEmpty())
        cout<<"Queue Underflow"<<endl;
 if(front==rear)
        front=rear=-1;
    else if(front+1==capacity)
        front=0;
    else
        front++;
}

template<typename X>
X Queue<X>::getfront()
{

      if(isEmpty())
        cout<<"QUEUE_UNDERFLOW"<<endl;
    return ptr[front];

}

template<typename X>
X Queue<X>::getrear()
{
if(isEmpty())
cout<<"queue underflow"<<endl;
return ptr[rear];
}


template<typename X>
int Queue<X>::count()
{
 if(isEmpty())
        return 0;
    if(rear>=front)
        return rear-front+1;
    else
        return capacity- (front-rear)+1;

}
//Destructor
template <typename X>
Queue<X>::~Queue()
{
    delete []ptr;
}



int main()
{
    Queue<int> q1(5);

    q1.insert(10);
     q1.insert(20);
      q1.insert(30);

        cout<<"Front Element = "<<q1.getfront()<<endl;

          cout<<"Rear Element = "<<q1.getrear()<<endl;

          q1.del();

            cout<<"After Delete Front = "<<q1.getfront()<<endl;

    return 0;
}

