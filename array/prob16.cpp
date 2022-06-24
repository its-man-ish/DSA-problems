#include<bits/stdc++.h>
using namespace std;

//  max'm consecutive 1 in a Boolean array

  


int maxConsecutiveOnes(int arr[],int n){

    int res = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            curr=0;
            
        }
        else {
            curr++;
            res = max(curr,res);
        }
        
    }
    
    
    return res;
  


}

int main()
{
   int arr[] = {0, 1, 1, 0, 1, 1, 1}, n = 7;
   
   cout<<maxConsecutiveOnes(arr, n);
    
    
    

    return 0;
}