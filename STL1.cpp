
#include<iostream>
using namespace std;

// template <class X>
// X big(X a,X b)
// {
   
//     return (a>b)?a:b;
// }


// int main ()
// {
//     cout<<"graeater value =";
//     cout<<big(10,20)<<endl;

//     cout<<"graeater value =";
//     cout<<big(10.5,20.6)<<endl;

//     cout<<"graeater value =";
//     cout<<big('A','Z');

// }



//--------------------------------------





// template <class X>
// X small(X a,X b)
// {
//     if(a>b)
//     return (a<b)?a:b;
// // }



//---------------------------------------------    




// template <class T>
// void printarray(T arr[], int size)
// {
//   for  (int i=0;i<size;i++)
//   {
//     cout<<arr[i]<<" ";
//   }
// cout<<endl;

// }

// int main()
// {
//     int a[]= { 2,5,7,8,9};
//     float b[]={ 3.1f, 4.2f, 4.44f};
//     char c[]= {'x','r','t'};

//     cout<<"integer array";
//     printarray(a,5);

//     cout<<"float  array";
//     printarray(b,3);

//     cout<<"char array";
//     printarray(c,3);

//     return 0;


// }

//-----------------------------------------

// template <class T>
// void Sortarray(T arr[],int size)
// {
//     for (int i=0;i<=size-1;i++){
//    for(int j=0;j<=size-1-i;j++){
// if(arr[j]>arr[j+i]){
// T temp=arr[j];
// arr[j]= arr[j+i];
// arr[j+i]=temp;


//             }
//         }
//     }

//  cout<<"sorted array :";
//   for  (int i=0;i<size;i++)
//   {
//     cout<<arr[i]<<" ";
//   }

// }
// int main()
// {
//     int a[]={2,5,8,9,12};
//    int  size = 5;
//    Sortarray(a,size);

// return 0;
// }


//-------------------------------------------



template <class T>
T greatest(T arr[], int size)
{
T max= arr[0];
for(int i=0;i<size;i++)
{
  if(arr[i]>max){
  max=arr[i];
}
}

return max;
}
int  main()
{
  int a[]={3,6,7,8,9};
  int size=5;
  greatest(a,size);

  return 0;
}