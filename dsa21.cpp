#include<iostream>
using namespace std;

int linearSearch(int A[],int n, int item )
{
    int i;
    for(i=0;i<n;i++)
    {
    if(A[i]==item)
    return 1;
    }
    return -1;
}

int main()
{
    int A[10]={2,4,5,6,7,3,5,7,9,44};
    int item,result;
    cout<<"enter the item";
    cin>>item;

    result=linearSearch(A,10,item );


if(result==-1)
cout<<item <<"item  not found";
else
cout<<item<<" item  found"<<result ;

return 0;

}








// #include<iostream>
// using namespace std;

// int binarySearch(int A[], int l, int u, int item)
// {
//     int m;

//     while(l <= u)
//     {
//         m = (l + u) / 2;

//         if(A[m] == item)
//             return m;

//         if(item < A[m])
//             u = m - 1;
//         else
//             l = m + 1;
//     }

//     return -1;
// }

// int main()
// {
//     int A[10] = {18,29,35,40,53,59,61,62,87,90};
//     int item, result;

//     cout<<"Enter item to search: ";
//     cin>>item;

//     result = binarySearch(A,0,9,item);

//     if(result == -1)
//         cout<<"Item not found";
//     else
//         cout<<"Item found at index "<<result;

//     return 0;
// }