#include<iostream>
#include<list>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



// int main()
// {
// list<string> l1={"kol","trt","kei","ffg","yrr"};
// list<string> ::const_reverse_iterator it;
// for(it=l1.crbegin();it!=l1.crend();it++)
// cout<<*it<<" ";
// cout<<endl;

// return 0;
// }




// //SAME QUSTION USING REVERSE ITERATOR
// int main()
// {
//     list<string> l1 = {"kol","trt","kei","ffg","yrr"};

//     for(auto it = l1.rbegin(); it != l1.rend(); ++it)
//         cout << *it << " ";

//     return 0;
// }

//----------------------------------------------------------------------

// int main()
// {
//     vector<int> v={45,67,89,23,45};
//     list<int> l1;

//     l1.insert(l1.begin(),v.begin(),v.end());
//     for(auto x:l1)
//     cout<<x<<" ";
//     cout<<endl;

//     return 0;

// }






//-------------------------------------------------

// int main()
// {
//     list<int> l1={23,445,67,89,90};
//     cout<<"the greatest elememnt is"<<*max_element(l1.begin(),l1.end());
// cout<<endl;

// return 0;
// }



//----------------------------------------------------------


//SIR TECHNIQUE
// int main()
// {
//     list<int> l1={30,70,65,45,33,22,21,55,63,21,10};
//     vector<int> v1;

//     for(auto x:l1)
//    v1.push_back(x);

//    sort(v1.begin(),v1.end());
//    l1.clear();

//    l1.insert(l1.begin(),v1.begin(),v1.end());
//    for(auto x:l1)
// cout<<x<<" ";
// cout<<endl;

// return 0;
// }



//ai technique
// int main()
// {
//     list<int> l1 = {30,70,65,45,33,22,21,55,63,21,10};

//     l1.sort();

//     for(auto x : l1)
//         cout << x << " ";

//     cout << endl;

//     return 0;

// }



//------------------------------------------------------------

int main()
{
    vector<int> v1 = {30,70,65,45,33,22,21,55,63,21,10};
list<int> l1;

for(auto x:v1)
{
if (x%2==0)

    l1.push_front(x);
    else
    l1.push_back(x);
}

for(auto x:l1)

cout<<x<<" ";

cout<<endl;

return 0;
}





