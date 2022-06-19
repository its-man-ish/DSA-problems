#include<bits/stdc++.h>
using namespace std;

//largest element in an array
int main()
{
    int arr[] = {3,4,99,5,1,8};
    int idx;
    int MAX = -9999;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]>MAX)
        {
            MAX = arr[i];
            idx = i;
        }
        
    }
    cout<<"LARGEST ELEMT AT: "<<idx;
    

    return 0;
}