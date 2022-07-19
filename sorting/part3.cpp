#include<bits/stdc++.h>
using namespace std;

//selection sort C++
void selectionSort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j=i+1;j<n-1;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
        
    }
    
}
int main()
{
    int arr[] = {20,10,30,5,50};
    cout<<"Array after sorted "<<endl;
    selectionSort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}