#include<bits/stdc++.h>
using namespace std;

//Bubble sort C++
void bubbleSort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}
int main()
{
    int arr[] = {20,10,30,5,50};
    cout<<"Array after sorted "<<endl;
    bubbleSort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}