#include<bits/stdc++.h>
using namespace std;


void reverArray(int arr[], int low, int high){
   while(low<high)
   {
       swap(arr[low],arr[high]);
       low++;
       high--;
   }
}
void leftRoationByD(int arr[], int n,int d)
{

    reverArray(arr,0,d-1);
    reverArray(arr,d,n-1);
    reverArray(arr,0,n-1);


}


int main()
{
    int arr[] = {3,5,0,8,9};
    cout<<"Before Rotation"<<endl;

       for(int i = 0; i < 5; i++)
       {
       		cout<<arr[i]<<" ";
       }
    leftRoationByD(arr,5,2);
     cout<<endl;
    cout<<"After Rotation"<<endl;

       for(int i = 0; i < 5; i++)
       {
       		cout<<arr[i]<<" ";
       }


    return 0;
}