#include<bits/stdc++.h>
using namespace std;

//Moves Zeroes to End

int moveZeroes(int arr[], int n)
{
    
   
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]==0)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                }
            }
            
        }
        
    }
  
    
     cout<<"New array: ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}
int main()
{
    int arr[] = {3,5,0,8,9,10,0,0,10,11};
    moveZeroes(arr,10);

    return 0;
}