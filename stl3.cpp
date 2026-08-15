
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;




// int main()
// {
// array<int,5> a1={50,40,30,20,10};
// array<int,5>::reverse_iterator rit;
// for(rit=a1.rbegin(); rit!=a1.rend();rit++)
// cout<<*rit<<" ";
// return 0;

// }





// int  main()
// {
//     array<float,5> a1={5.6f, 6.7f, 5.66f, 9.4f, 7.55f};
//     array<float,5>::iterator it;
//     float sum=0,avg;
//     for(it=a1.begin();it!=a1.end();it++)
    
//     sum=sum+ *it;
//     avg=sum/a1.size();

//     cout<<"avg is"<<avg;

//     return 0;

// }






// int main()
// {
//     
//     array<int,10> a1;
//     cout<<"enter the 10 number";
//     for(int i=0;i<a1.size();i++ )
//     {
//         cin>> a1[i];
//       
//     }
//     cout<<"the greatest element is"<<*max_element(a1.begin(),a1.end());
    
// }






// class Complex{
//     private:
//     int a,b;

//     public:
//     Complex(int x, int y):a(x),b(y)
//     {}

//     void showdata()
//     {
//         cout<<"a="<<a<<"b="<<b;
//     }
// Complex operator+ (Complex C)
// {
//     Complex temp(0,0);

//     temp.a=a+C.a;
//     temp.b=b+C.b;

//     return temp;
// }

// };
// Complex sumcomplex(array<Complex,5>);
// int main()
// {

// array <Complex,5> a1={
//     Complex(9,8),
//     Complex(4,5),
//     Complex(3,4),
//     Complex(2,9),
//     Complex(1,0)
// };

// Complex C= sumcomplex(a1);
// C.showdata();
// }

// Complex sumcomplex(array<Complex,5> a1)
// {
//     Complex C(0,0);

//     for(auto x:a1)
//     C=C+x;

//     return C;
// }






int main()
{
    array<int,10> a1={23,45,78,99,32,12,33,67,90,31} ;
    sort(a1.begin(),a1.end());
    cout<<"sorted array";

    for(auto x:a1)
    cout<<x<<" ";
}