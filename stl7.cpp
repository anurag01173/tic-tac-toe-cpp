#include<iostream>
#include<forward_list>
#include<string>
#include<algorithm>

using namespace std;


//aitech 
// int main()
// {
//      forward_list<int> f1;
//     f1.assign(4,10);
//     f1.insert_after(f1.before_begin(),3,5);
//     for(auto x:f1)
//      cout<<x<<" ";
     
//      cout<<endl;

//      return 0;
// }



//sir tech
// int main()
// {
//      forward_list<int> f1;
//     f1.assign({10,10,10,10,5,5,5});
    
//     for(auto x:f1)
//      cout<<x<<" ";
     
//      cout<<endl;

//      return 0;
// }


//----------------------------------------------

// int main()
// {
//      forward_list<string> f1={"kol","bhu","odi","garia","new g"};  
//      f1.reverse();
//      for(auto x:f1)
//      cout<<x<<" ";
//      cout<<endl;

//      return 0;


// }

//----------------------------------------------

//ai tech 
// int main()
// {
//   forward_list<int> f1={34,56,21,45,89,33,65,95}   ;
//   for(auto x:f1)
//   { 
//      if(x>33)
//      cout<<x<<" ";   
// }
//   return 0;
// }



//CANT UNDERSTAND 
//sir tech  
int main()
{
   forward_list<int> f1={34,56,21,45,89,33,65,95};
   int num,count=0;
   cin>>num;
   auto f=[&](int x)-> void  /// lamda func
   {
     if(x>num)
      count++ ;
      //Takes an element x.
//If x is greater than num, increase count.

     };

   for(auto x:f1)
   {
     f(x);
   }

       cout<<"Count="<<count<<endl;
       return 0;
}


//----------------------------------------------
//sir solution but wrong beacuse naswer always soerte aayega but question me sort kar ke nahi maanga hai

//  void p4()
// {
//   forward_list<int> f1={34,56,21,45,89,33,65,95};
// int num;
//  cout << "Enter a number: ";
// cin>>num;

// f1.sort();
// f1.remove(*upper_bound(f1.begin(),f1.end(),num));   //upper_bound -- It returns an iterator pointing to the first element that is strictly greater than value.
//   for(auto x:f1)
//   cout<<x<<" ";
//   cout<<endl;
// }

// int main()
// {
//      p4();
//      return 0;
// }



//----------------------------------------------


// struct Term
// {
//      int coeff,exp;
//      Term(int c, int e):coeff(c),exp(e){}
// };

// void p5()
// {
//      forward_list<Term> f1;
//      f1.push_front(*new Term(20,0) );
//      f1.push_front(*new Term(34,2) );
//      f1.push_front(*new Term(-12,3) );
//      f1.push_front(*new Term(3,3) );

//      for(auto x:f1)
//      cout<<"( "<<x.coeff<<"x^"<<x.exp<<")";
//      cout<<endl;
// }

// int main()
// {
//      p5();
//      cout<<endl;
//      return 0;
// }