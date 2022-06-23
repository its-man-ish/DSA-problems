#include<bits/stdc++.h>
using namespace std;

// MAx diffrence of array

void countFrequncy(int arr[],int n){

    int freq = 0;
  
   for (int i = 0; i < n; i++)
   {
       freq++;
       if (arr[i]!=arr[i+1])
       {
           cout<<arr[i]<<" "<<freq<<endl;
           freq = 0;
       }
       
   }
   

}

int main()
{
    int arr[] = {3,3,5,5,7,9,9,9,9};
   
   countFrequncy(arr,9);
    
    
    

    return 0;
}