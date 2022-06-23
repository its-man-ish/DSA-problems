#include<bits/stdc++.h>
using namespace std;

// Leaders in the array problem
//An element is called the leader of an array if there is no element greater than it on the right side

void leaderArray(int arr[],int n){
   int curr_leader = arr[n-1];
   cout<<curr_leader<<" ";
   for (int i = n-2; i >=0; i--)
   {
       /* code */
       if (curr_leader<arr[i])
       {
           curr_leader=arr[i];
           cout<<curr_leader<<" ";
       }
       
   }
   

}

int main()
{
    int arr[] = {3,10,9,8,8};
   
    leaderArray(arr,5);
    
    


    return 0;
}