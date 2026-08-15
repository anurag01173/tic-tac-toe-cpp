#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// bool is_palindrom(string str)
// {
//     int len=str.size();
// stack <char,vector<char>> s1;
// for(int x=0;x<len/2;x++)
// {
// s1.push(str.back());
// str.pop_back();
// }
// if(len%2)
// str.pop_back();

// while(!str.empty())
// {
// if(str.back()!= s1.top())
// return false;

// str.pop_back();
// s1.pop();

// }

// return true;

// }

// int main()
// {
//     string str="radar";

//     if(is_palindrom(str))
//     cout<<"palindrom";
//     else
//     cout<<"not palindrom";
// }

//----------------------------------------------------------------

// void reverse_stack(stack<string> &str)
// {
//     stack<string> temp;

//     while (!str.empty())
//     {
//         temp.push(str.top());
//         str.pop();
//     }
//     str = temp;
// }

// int main()
// {
//    stack<string> s;

//    s.push("m");
//    s.push("o");
//    s.push("n");
//    s.push("d");

//    reverse_stack(s);

//    while(!s.empty())
//    {
//     cout<<s.top()<<" ";
//     s.pop();
//    }
//    return 0;

// }

//-----------------------------------


// int getcode(char ch)
// {
//     switch(ch)
//     {
//         case'[':
//         return 1;
//        case'{':
//         return 2;
//         case'(':
//       return 3;
//       case']':
//         return -1;
//     case'}':
//         return -2;
//         case')':
//         return -3;


//         default:
//         return 0;
//     }
// }


// bool balanced_bracket(string str)
// {
// char x;

// if(str.size()%2)    //If length is odd, brackets can never be balanced
// return false;

// stack<char,vector<char>> s1; // Stack to store opening brackets

// for(char ch:str)
// {
// if(ch=='[' || ch=='{' || ch=='(')   // If opening bracket, push into stack
// s1.push(ch);

// if(ch==']' || ch=='}' || ch==')')
// {

// x=s1.top();
// if(getcode(ch) != -getcode(x))
// return false;

// s1.pop();

// }
// }

// return true;


// }

// int main()
// {
//     string str = "[{()}]";

//     if(balanced_bracket(str))
//         cout << "Balanced";
//     else
//         cout << "Not Balanced";

//     return 0;
// }

//--------------------------------


// void delete_middle(stack <string> &str)
// {
// int len=str.size();
// stack<string>temp;

// if(len%2)
// {
//     for(int x=len-1;x>=0;x--)
//     {
// if(len/2==x)
// {
//     str.pop();
//     continue;
// }

// temp.push(str.top());
// str.pop();
//     }
//     while(!temp.empty())
//     {
//         str.push(temp.top());
//         temp.pop();
//     }
// }
// }

// int main()
// {
//    stack<string> s;
   
//    s.push("a");
//    s.push("b");
//    s.push("c");
//    s.push("d");
//    s.push("e");


// cout<<"before deleting middle:\n";
// stack<string> t=s;  //// copy for display
// while(!t.empty())
// {
//     cout<<t.top()<<" ";
//     t.pop();
// }
// cout<<"\n\n";

// delete_middle(s);

// cout<<"after delelteing miidddle:\n";

// while(!s.empty())
// {
//     cout<<s.top()<<" ";
//     s.pop();
// }

// return 0;
// }

//----------------------------------------------

