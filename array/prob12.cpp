#include<bits/stdc++.h>
using namespace std;

// MAx diffrence of array

int maxDiffernce(int arr[],int n){
   int max = -99999;
   int min = 99999;
   for (int i = 0; i < n; i++)
   {
    if (max<arr[i])
    {
       max = arr[i];
    }
    
    
   }
    for (int i = 0; i < n; i++)
   {
    
    if(min>arr[i]){
        min = arr[i];
    }
    
   }
  
  cout<<"Max: "<<max<<" Min: "<<min;
  cout<<endl;
  cout<<"Max differnec: "<<max-min;
  return max-min;
   

}

int main()
{
    int arr[] = {3,10,9,8,8};
   
   maxDiffernce(arr,5);
    
    
    

    return 0;
}