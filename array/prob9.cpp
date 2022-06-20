#include<bits/stdc++.h>
using namespace std;

//Left rotation byOne

int leftRoationByone(int arr[], int n)
{
    
   
    int temp = arr[0];

    for (int i = 1; i < n; i++)
         arr[i-1]=arr[i];
    
    arr[n-1]=temp;
    
    

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}
int main()
{
    int arr[] = {3,5,0,8,9};
    leftRoationByone(arr,5);

    return 0;
}