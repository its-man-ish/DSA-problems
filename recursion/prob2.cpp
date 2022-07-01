#include<bits/stdc++.h>
using namespace std;
int countDigits(int N)
{
    if(N== 0)
      return 1;
   
    
    
  
    return 1+countDigits(N/10);;
}

int main()
{
    int N=99999;
    
        int count = 0;
        while (N>0)
        {
            count++;
            N=N/10;
        }
        
       cout<<"Digits: "<<count<<endl;


        cout<<"Digits: "<<countDigits(N);


    


    return 0;
}