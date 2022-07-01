#include<bits/stdc++.h>
using namespace std;
int sumDigits(int N)
{
    if(N==1 ||N== 0)
      return N;
    int rem = N%10;
    rem = rem+ sumDigits(N/10);
    return rem;
}

int main()
{
    int n = 99999, N=99999;
    int sum = 0,rem=0;
    while(n>1)
    {
        rem =n%10;
        n = n/10;
        cout<<rem<<" ";
        sum =sum+ rem;

    }
        cout<<endl;
        cout<<"Iterative SUM: "<<sum;

        cout<<"Recursive SUM: "<<sumDigits(N);


    


    return 0;
}