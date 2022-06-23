#include<bits/stdc++.h>
using namespace std;

//  Trapping Rain Water Problem.

int trapWater(int arr[], int large, int slarge, int n)
{  
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=large)
        {
            res = res +(slarge-arr[i]);
        }
        
    }
    return res;
    
}

int secondLarge(int arr[],int n){

    int res=-1, large=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[large])
        {
            res=large;
            large=i;
        }
        else if (res==-1 || arr[res]<arr[i])
        {
            res=i;
        }
        
        
    }
    int water = trapWater(arr,arr[large],arr[res],n);
    cout<<"trap water collected "<<water;
    
    return 0;
  
   
   

}

int main()
{
    int arr[] = {3,0,1,2,5};
   
    secondLarge(arr,5);
   
    
    
    

    return 0;
}