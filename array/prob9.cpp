#include<bits/stdc++.h>
using namespace std;

//Left rotation byOne

void leftRoationByone(int arr[], int n)
{
    
   
    int temp = arr[0];

    for (int i = 1; i < n; i++)
         arr[i-1]=arr[i];
    
    arr[n-1]=temp;
    
    
    
}
// left rotation by D 
void leftRoationByD(int arr[], int n,int d)
{

    for (int i = 0; i < d; i++)
    {
        leftRoationByone(arr,n);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }    
}
int main()
{
    int arr[] = {3,5,0,8,9};
    leftRoationByD(arr,5,2);

    return 0;
}