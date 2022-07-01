#include<bits/stdc++.h>
using namespace std;
/*
You are given a number n. 
You need to find the digital root of n. 
DigitalRoot of a number is the recursive sum of its digits 
until we get a single digit number.

Example:
Input:
n = 99999
Output: 9
Explanation: Sum of digits of 99999 is 45
which is not a single digit number, hence
sum of digit of 45 is 9 which is a single
digit number

*/
int digitalRoot(int N)
{
    if(N<10)
      return N;
    int sum = N%10 + digitalRoot(N);
    if (sum>=10)
      digitalRoot(sum);
    
    return sum;
   
    
}

int main()
{
    int N=99999;
    
       
        cout<<"Digital root: "<<digitalRoot(N);
      
    


    return 0;
}