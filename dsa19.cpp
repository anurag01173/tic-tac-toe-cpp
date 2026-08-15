#include<iostream>
using namespace std;


//ai tech 

// void bubbleSort(int arr[],int n)
// {
    
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-1-i;j++)
//         {

//         if(arr[j]>arr[j+1])
//         {
//            int temp;
//          temp =  arr[j+1];
//         arr[j+1] =  arr[j];
//         arr[j]= temp;
//         }
       

//     }
// }
// }
// int main()
// {
// int arr[]={3,8,9,2,5,4}, n=6;

// bubbleSort(arr,n);
// cout<<"the sorted array bubble sort is\n";
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i];

// }
// }



//  sir TECH 



// void bubbleSort(int A[],int size)
// {
//     int r,i,t;
//     for(r=1;r<size;r++)
//     {
//         for(i=0;i<=size-1-r;i++)
//         {
//             if(A[i]>A[i+1])
//             {
//                 t=A[i];
//                 A[i]=A[i+1];
//                 A[i+1]=t;
//             }
//         }
//     }
// }


//--------------------------------------------------------





// void bubbleSort(int A[],int size)
// {
//     int r,i,t;
//     bool flag;
//     for(r=1;r<size;r++)
//     {
//         flag=false;
//         for(i=0;i<=size-1-r;i++)
//         {
//             if(A[i]>A[i+1])
//             {
//                 flag=true;
//                 t=A[i];
//                 A[i]=A[i+1];
//                 A[i+1]=t;
//             }
//         }  
//           if(flag==false)
//          break;
//     }
// }
// int main()
// {
//     int A[]={1,2,3,4,5}, size=5;
// bubbleSort( A,size);

// cout<<"the sorted array is \n" ;
// for(int r=0;r<size;r++)
// {
//     cout<<A[r];
// }
// }




//---------------------------------------------------------------------




// void insertionSort(int size, int A[])
// {
//     int temp,i,j;
//     for(i=1;i<size;i++)
//     {
//         temp=A[i];
//         for( j=i-1;j>=0;j--)
//         {
//          if(temp<A[j])
         
//          A[j+1]=A[j];
//          else
//          break;
//         }
//         A[j+1]=temp;

//     }
// }


// int main()
// {
//     int A[]={3,5,4,1}, size=4;
//     insertionSort( size,  A);
//     cout<<"the insertion sort is\n";
//     for(int i=0;i<size;i++)
//     {
// cout<<A[i];
//     }
// }



//-------------------------------------------------------


int minvalueIndex(int A[],int size,int j)
{
    int min=A[j];
     int minIndex=j;

     for(int i=j+1;i<=size-1;i++)
     {
        if(min>A[i])
        {
            min=A[i];
            minIndex=i;
        }
     }
     return minIndex;

}

// int main()
// {
//     int A[]={3,5,4,0,6}, size=5,j=0;
//    int index= minvalueIndex(A, size, j);

  
//      cout<<index<<endl;
//     cout<<A[index];


//     return 0;
//    }



   int SelectionSort(int A[],int size)
   {
    int i,t,minIndex;
       
    for(  i=0;i<=size-2;i++)
{
    minIndex= minvalueIndex(A, size, i);
    t=A[i];
    A[i]=A[minIndex];
    A[minIndex]=t;
}
   }


int main()
{
    int A[]={3,5,4,0,6}, size=5;
 SelectionSort(A, size);
int i;
 cout<<"the selection sort is";
 for(i=0;i<size;i++)
 {
    cout<<A[i];
 }

  
    


    return 0;
   }




   //----------------------------------------



   int quick(int A[],int left,int right)
   {
      int loc=left,t;
      while(left<right)
      {
         while(left<right  &&  A[loc]<=A[right])
         right --;

         if(left==right)
         break;

         t=A[i];
         A[i]=A[left];
         A[left]=t;

         loc=right;

         while(left<right  &&  A[left]<=A[loc])
         left++;

         if(left==right)
         break;

         t=A[left];
         A[left]=A[loc];
         A[loc]=t;

         loc=left;

      }

      return loc;
   }



// //  CANT UNDESTAND 

//    void quickSort(int A[],int l,int u)
// {
//     int loc;
//     loc=quick(A,l,u);
//     if(loc>l+1)
//         quickSort(A,l,loc-1);
//     if(loc<u-1)
//         quickSort(A,loc+1,u);
// } 







// //  CANT UNDESTAND 



// void quickSortLoop(int A[],int l,int u)
// {
//     int loc,i,j;
//     stack <int,deque<int>> lower;
//     stack <int,deque<int>> upper;
//     lower.push(l);
//     upper.push(u);
//     while(!lower.empty())
//     {
//         i=lower.top();
//         j=upper.top();
//         loc=quick(A,i,j);
//         lower.pop();
//         upper.pop();
//         if(loc>i+1)
//         {
//             lower.push(i);
//             upper.push(loc-1);
//         }
//         if(loc<j-1)
//         {
//             lower.push(loc+1);
//             upper.push(j);
//         }
//     }





