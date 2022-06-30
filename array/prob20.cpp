#include<bits/stdc++.h>
using namespace std;

//  Window sliding Techniques

//max sum of k consecutive element

  


int maxKConsecutiveSum(int arr[],int n,int k)
 {
     int init_sum = 0;
     for (int i = 0; i < k; i++)
     {
         init_sum =init_sum+ arr[i]; 
     }
     int max_sum = init_sum;
     for (int i = k; i < n; i++)
     {
         init_sum = init_sum + (arr[i]-arr[i-k]);
         max_sum = max(max_sum,init_sum);

     }
     return max_sum;
     

  

}

int main()
{
   int arr[] = {1,5,30,-5,20,7}, n = 6,k=3;
   
   cout<<maxKConsecutiveSum(arr, n,k);
    

    

    return 0;
}