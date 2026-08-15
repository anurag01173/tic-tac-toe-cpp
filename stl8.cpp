#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;



// int main()
// {
//     int n,x;
//     deque<int> d1;
//     deque<int> ::iterator it;


//     cout<<"enter the no of element you want to enter"<<" ";
//     cin>>n;

//     cout<<" eneter the no with spaces";
//     for(int i=0;i<n;i++)
//     {
//         cin>>x;
//         d1.push_back(x);
//     }
//     for(it=d1.begin();it!=d1.end();it++)
//     cout<<*it<<" ";

//     cout<<endl;

//     return 0;
// }

//------------------------------------------------------------
// int main()
// {
//  deque<int> d1={34,56,89,122,56};
//  cout<<"the greatest element is "<<*max_element(d1.begin(),d1.end());
//  return 0;

// }

//------------------------------------------------------------




// void p3(deque <int> d1)
// {
// int count=0,i=0,j=0;
// sort(d1.begin(),d1.end());

// while(j<d1.size())
// {
//     if(d1[i]==d1[j])
//     {
//     count++;
//     j++;
//     }
// else
// {
//     cout<<d1[i]<<"-"<<count<<endl;
//     i=j;
//     count=0;

// }
// }
//   cout<<d1[i]<<"-"<<count<<endl;

// }

// int main()
// {
    
// deque<int> d1={23,56,23,22,56,21};
// p3(d1);
//     return 0;
// }


 //-------------------------------------------------------





// void p4(deque<int>d1)
// { //{45,34,60,71,82,11,14,18,5,22,33,6}
//     int i=0,k,length,maxLength=0,index;
//     while(i<d1.size())
//     {
//         k=i;
//         while(i<d1.size()-1 && d1[i]<=d1[i+1])
//             i++;
//         length=i+1-k;
//         if(length>maxLength)
//         {
//             maxLength=length;
//             index=k;
//         }
//         i++;
//     }
//     cout<<"Largest sorted subsequence is: ";
//     deque<int> ::iterator it;
//     for(it=d1.begin()+index;it!=d1.begin()+index+maxLength;it++)
//         cout<<*it<<" ";
//     cout<<endl;
// }


// int main()
// {
//     deque<int> d1={76,95,58,67,23};
//     p4(d1);
//     return 0;

// }

//-------------------------------------------------------------------


int p5(deque<int> d1)
{
    int c,i=0,maxvalue,maxfrequency=0;
    while(i<d1.size())
    {
        c=count(d1.begin(),d1.end(),d1[i]);
        if(maxfrequency<c)
        {
            maxfrequency=c;
            maxvalue=d1[i];
        }
        i++;
    }
    return maxvalue;
}

int main()
{
    deque <int>d1={6,10,23,6,6,10,6,23,10,10};
    cout<<p5(d1);

    cout<<endl;
    return 0;
}