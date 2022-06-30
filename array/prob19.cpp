#include<bits/stdc++.h>
using namespace std;

//  longest even odd

  


void majorityElement(int arr[],int n)
 {
     int idx = 0, count = 0;
     for(int i = 0; i<n; i++)
     {
       if (arr[i]==arr[idx])
       {
           count++;
           idx = i;

       }
       if(count>n/2)
       {
           cout<<idx<<" ";
       }
       
     }



}

int main()
{
   int arr[] = {10,10,14,7,10}, n = 5;
   
   majorityElement(arr, n);
    

    

    return 0;
}