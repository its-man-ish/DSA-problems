#include<bits/stdc++.h>
using namespace std;

//find training zeros in a factorial of a number

int factorial(int N)
{
     long long int fac = 1;
     while(N>1){
         fac = fac*N;
         N=N-1;
     }
     return fac;
}

int trailZeroes(int z){
    int count = 0;
    long long N = factorial(z);
    while(N>0){
        if(N%10==0)
        {
            count++;
            N=N/10;

        }
        else{
           return count;

        }
    }
    return count;
}

int main()
{
    cout<<trailZeroes(100);

    return 0;
}