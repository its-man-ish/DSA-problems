#include<bits/stdc++.h>
using namespace std;

//  Window sliding Techniques

//check if the sum of sub array is equal to the given sum

  


int givenSum(int arr[],int n,int sum)
 {
     int init_sum = arr[0];
     int temp;
     for (int i = 1; i < n; i++)
     {
         if(init_sum!=sum){
             temp = init_sum;
             init_sum=init_sum+arr[i]-arr[i-1];

             cout<<init_sum<<endl;
         }
         else if(init_sum==sum){
             cout<<"Yes";
             return init_sum;
         }

     }
     return 0;
     
     

  

}

int main()
{
   int arr[] = {1,4,20,3,10,5}, n = 6,sum=33;
   
   cout<<givenSum(arr, n,sum);
    

    

    return 0;
}