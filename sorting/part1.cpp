#include<bits/stdc++.h>
using namespace std;

//sort function in C++STL
int main()
{
    int arr[] = {20,10,30,5,50};
    sort(arr,arr+5);  // sort(address_of_first, address_of_after_last)
    cout<<"Array after sorted "<<endl;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sorting in decreasing order
    sort(arr,arr+5,greater<int>());
    cout<<"Array after sorted in decreasing order "<<endl;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
   
   //sortong vetors
    cout<<endl;

    vector <int> v = {20,10,10,5,50};
    sort(v.begin(),v.end());
    cout<<"Vector array after sorted "<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(), greater<int>());
    cout<<"Vector array after sorted in decreasing order "<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}