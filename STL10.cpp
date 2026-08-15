#include<iostream>
#include<queue>  //for stl
#include<stack>
#include<deque>
#include<vector>
using namespace std;



// //--------------------------------------------------
// class stack{
//     private:
//     queue<int> top;

//     public:
//     bool is_empty();
//     void push(int);
// int peek_top();
// void pop();

// };

// bool stack::is_empty()
// {
// return top.empty();
// }

// void stack:: push(int value)
// {
//     top.push(value);
// }


// int stack::peek_top()
// {
//     if(top.empty())
//     throw -1;
// return top.back();
// }


// void stack::pop()
// {
//     queue<int> temp;
//     int len=top.size();

//   while(!top.empty())
//   {
//     if(len==1)
//     {
//         top.pop();
//         break;

//     }
// temp.push(top.front());   // Copy front element to temp
// top.pop();     //// Remove copied element
// len--;        //  // Decrease count

//   }

//   if(top.empty())
//   top=temp;
// }



// int main()
// {
// stack s1;

// s1.push(10);
// s1.push(20);
// s1.push(30);

// s1.pop();

// cout<<s1.peek_top()<<endl;

//     return 0;
// }

// //--------------------------------------------



// class  PriorityQueue
// {
//     private:
//     int capacity;
// vector<queue<int>> priorities;

//     public:
//            PriorityQueue(int Pno) : capacity(Pno),priorities(Pno) {}
//              void insert(int,int);
//     void pop();
//     int getHighestPno();
// int getitem();
// bool getempty();
// };

// void PriorityQueue::insert(int value, int Pno)
// {
//     if(Pno>0 && Pno <capacity)
//         priorities[Pno-1].push(value);
//     else
//         cout<<"Invalid Priorities Number"<<endl;
// }  

//  void PriorityQueue::pop()
//  {
//      for(int x=capacity-1;x>=0;x--)
//     if(!priorities[x].empty()){
//       priorities[x].pop();
//       break;
//     }
//  }


// int PriorityQueue::getHighestPno()
// {
//     for(int x=capacity-1;x>=0;x--)
//     if(!priorities[x].empty())
//     return x;

//     throw -1;
// }

// int PriorityQueue::getitem()
// {
//     for(int x=capacity-1;x>=0;x--)
//     if(!priorities[x].empty())
//     return priorities[x].front();

//     throw -1;
// }

// bool PriorityQueue::getempty()
// {
//      for(int x=capacity-1;x>=0;x--)
//     if(!priorities[x].empty())
//     return false;

//     return true;
// }



// int main()
// {
//     PriorityQueue pq1(10);
//     pq1.insert(10, 3);
//     pq1.insert(20, 1);
//     pq1.insert(30, 5);
//     pq1.insert(40, 5);
//     pq1.insert(50, 5);
//     pq1.insert(60, 5);
//     pq1.pop();
//     cout<<pq1.getitem();
//     return 0;
// }


//-------------------------------------------------------


// void reverse_queue_k_position(int k , queue<int>&q)
// {

//     queue <int>temp;
//     stack <int>s1;

//     int i=1;
//     while(i<=k&&(!q.empty()))
//     {
//         s1.push(q.front());
//         q.pop();
//         i++;

//     }

//     while(!q.empty()|| !s1.empty())
//     {
//     if(!s1.empty())
//     {
// temp.push(s1.top());
// s1.pop();

//     }

//     else
//     {
//         temp.push(q.front());
//         q.pop();

//     }
// }

// q=temp;
// }



// int main()
// {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     int k = 3;

//     reverse_queue_k_position(k, q);

//     cout<<"queue after reversing first"<<k<<"elemenys\n";

//     while(!q.empty())
//     { 
//         cout<<q.front()<<" ";
//         q.pop();

//     }
// return 0;
// }


//------------------------------------------------------



