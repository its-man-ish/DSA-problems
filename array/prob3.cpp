#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3,4,5,1,8};
    int size = sizeof(arr)/sizeof(int);
    int x,i;
    cout<<"Enter elemt to be deleted "<<endl;
    cin>>x;
    cout<<"Size of array: "<<size<<endl;
    for (i = 0; i < size; i++)
     {
         if(arr[i]==x)
           break;
     }

     if (i==size)
     {
         cout<<size<<endl;
     }
     
     for (int j= i; j < size-1; j++)
     {
         arr[i]=arr[i+1];
     }
     
             cout<<"new array : "<<size-1<<endl;


 for (int j= 0; j < size-1; j++)
     {
         cout<<arr[j]<<" ";
     }
    


    return 0;
}