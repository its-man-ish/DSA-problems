#include<bits/stdc++.h>
using namespace std;

//Index of second largest element in an array

int secondLargest(int arr[], int n)
{
    int res = -1, large = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[large])
        {
            res=large;
            large = i;
        }
        else if(arr[i]!=arr[large])
        {
            if(res==-1||arr[res]<arr[i])
            {
                res = i;
            }
        }
        
    }
    return res;
    
}
int main()
{
    int arr[] = {3,87,99,5,1,8};
    cout<<"SECOND LARGEST ELEMT AT: "<<secondLargest(arr,6);
;
    

    return 0;
}