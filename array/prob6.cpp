#include<bits/stdc++.h>
using namespace std;

//Index of second largest element in an array

int revsereArray(int arr[], int n)
{
    int low = 0, high = n-1;
    while (low<high)
    {
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }

    cout<<"Reversed array "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
   
    return 0;
    
}
int main()
{
    int arr[] = {3,87,99,5,1,8};
    cout<<"SECOND LARGEST ELEMT AT: "<<revsereArray(arr,6);


    return 0;
}