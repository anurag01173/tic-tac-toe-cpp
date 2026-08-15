
#include<iostream>
#include<vector>
using namespace std;

// int main()
// {
//     vector<int> v1={34,56,84,43,45};
//     for(int i=0;i<v1.size();i++)
//     {
//     cout<<v1[i]<<"  ";
//     }
//     return 0;
// }





// int main()
// {
//     vector<float> v1={34.5f,56.6f,84.f,43.5f,45.6f};
//     for(int i=0;i<v1.size();i++)
//     {
//     cout<<v1.at(i)<<"  ";
//     }
//     return 0;
// }



// int main()
// {
//     vector<string> v1={ "kol","mahi","tarke","saltla","haryana"};
//     for(auto x:v1)
//     cout<<x<<" ";

//     return 0;
// }




// int main()
// {
//     vector<int> v1={59,78,67,98,99};
//     vector<int>::iterator it;
//     for(it=v1.begin();it!=v1.end();it++)
//     cout<<* it<<" ";
//     return 0;
// }



int main()
{
  vector<int> v1={59,78,67,98,99};
   vector<int>v2;
   vector<int>::iterator it;
   for(it=v1.begin()+1;it!=v1.end()-1;it++)  

if(*it<*(it+1)&& *it<*(it-1))
v2.push_back(*it);


for(auto x:v2)
cout<<x<<" ";
return 0;
}