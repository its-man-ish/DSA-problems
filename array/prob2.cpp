#include<bits/stdc++.h>
using namespace std;

//insert element in array
int main()
{
    int arr[6] = {3,4,5,1,8};
    int size = sizeof(arr)/sizeof(int);
    int pos;
    int insertIndex = pos-1;
    int x;

    cout<<"Enter position: ";
    cin>>pos;
    cout<<endl;
    cout<<"Enter elemnt to be inserted: ";
    cin>>x;

    for (int i = 6; i >=insertIndex; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[insertIndex]=x;
    cout<<"New array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
