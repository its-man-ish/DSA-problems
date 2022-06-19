#include<bits/stdc++.h>
using namespace std;

//Remove duplicate from a sorted array

int removeDuplicate(int arr[], int n)
{
    
   
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res-1]!=arr[i])
        {
            arr[res]=arr[i];
            res++;
        }
        
    }
  
    
     cout<<"New array: ";

    for (int i = 0; i < res; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}
int main()
{
    int arr[] = {3,5,5,8,9,10,10,10,10,11};
    removeDuplicate(arr,10);

    return 0;
}