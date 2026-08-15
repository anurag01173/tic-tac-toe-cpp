#include<iostream>
#include<vector>
#include<algorithm> //for find if
using namespace std;


 //YE  CALL KARR KE  PRINT 
// vector<int> p1(vector<int> v1)
// {
//     v1.erase(find_if(v1.begin(),v1.end(),[](int x)->bool{ return x<0;}),v1.end());

//     return v1;
// }

// int main()
// {
//     vector<int> v1={12,13,45,-67,89,55};

//     vector<int> result;
// result=p1(v1);
// cout<<"vector after deletion  "<<" ";
// for(auto x:result)
// cout<<x<<" ";

// return 0;
// }




// //YE BINAL CALL KIYE PRINT 
// int main()
// {
//     vector<int> v1={12,45,-67,89,55};

//     v1.erase(find_if(v1.begin(),v1.end(),[](int x)->bool {  return x<0; } ), v1.end());

//     cout<<"Vector after deletion: ";

//     for(auto x:v1)
//         cout<<x<<" ";

//     return 0;
// }


//---------------------------------------------------------------------------
////YE BINAL CALL KIYE PRINT 

// int main()
// {
// vector<int> v1={23,45,67};
// v1.insert(v1.end()-1,3,25);
// for(auto x:v1)
// cout<<x<<" ";
// return 0;
// }






// YE  CALL KARR KE  PRINT 
// void p2()
// {
//     vector<int> v1 = {20,60,30};
//     v1.insert(v1.end()-1, 3, 25);
//     cout<<"Vector elements are: ";
//     for(auto x : v1)
//         cout<<x<<" ";
//     cout<<endl;
// }
// int main()
// {
// p2();
// return 0;
// }

//------------------------------------------------------------------------




// void p3()
// {
//     vector<int> given_vector = {2,4,10,5,7,6,15,20,3,9};
//     vector <vector<int>> v1;
//     vector <int> *ptr;
//     int i=0,s,e,j=0;
//     while(i<given_vector.size()-1)
//     {
//         s=i;
//         while(i<given_vector.size()-1 && given_vector.at(i)<given_vector.at(i+1))
//             i++;
//         e=++i;
//         ptr=new vector<int>();
//         ptr->insert(ptr->begin(),given_vector.begin()+s,given_vector.begin()+e);
//         v1.insert(v1.begin()+j,*ptr);
//         j++;
        
//     }
//     for(auto x : v1)
//     {
//         for(auto y:x)
//             cout<<y<<" ";
       
//             cout<<endl;
//     }
// }
// int main()
// {
//     p3();
//     return 0;

// }



//-----------------------------------------------------

// bool is_primeNo(int x)
// {
//     int i;
//     for(i=2;i<=x-1;i++)
//     if(x%i==0)
//     return false;

//     return true ;
// }

// void p4()
// {
//     vector<int>v1={2,7,8,9,6,3,57,23};

//      vector<int>::iterator newEnd,it;
//      newEnd=remove_if(v1.begin(),v1.end(),[](int x)->bool {return is_primeNo(x);});
//      for(it=v1.begin();it!=newEnd;it++)
//      cout<<*it<<" ";

//      cout<<endl;
// }


// int main()
// {
//     p4();
//     return 0;
// }


//-------------------------------



int main()
{
   


    vector<vector<int>> vec={
    {2,7,8,9,6,3,57,23},
   {54,75,88,99,31},
    {211,776,898,999,546,003,557,203}
};
    vector<int> v1;
v1.insert(v1.end(),vec.at(0).begin(),vec.at(0).begin()+3);
v1.insert(v1.end(),vec.at(1).end()-2,vec.at(1).end());
v1.insert(v1.end(),vec.at(2).begin(),vec.at(2).end());

for(auto x:v1 )
{
    cout<<x<<" ";
}
return 0;

}