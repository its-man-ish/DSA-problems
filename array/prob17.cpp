#include<bits/stdc++.h>
using namespace std;

//  max'm consecutive 1 in a Boolean array

  


int maxSumSubArray(int arr[],int n){

    int res = arr[0];
    int curr = arr[0];
    for (int i = 0; i < n; i++)
    {
        curr = max(curr+arr[i],arr[i]);
        res = max(curr,res);
        
    }
    
    
    return res;
  


}

int main()
{
   int arr[] = {-3,8,-2,4,-5,6}, n = 6;
   
   cout<<maxSumSubArray(arr, 6);
    

    

    return 0;
}