#include<bits/stdc++.h>
using namespace std;
/*
Rope Cutting Problem:



*/
int maxRopes(int N, int a, int b, int c)
{
  if(N==0)
    return 0;
  if(N<=-1)
    return -1;
  int res = max(maxRopes(N-a,a,b,c),max(maxRopes(N-b,a,b,c),maxRopes(N-c,a,b,c)));

 if(res==-1){
     return -1;
 }

 return res+1;
}

int main()
{
    int N=23,a=11,b=9,c=12;
    
       
        cout<<"maxRopes : "<<maxRopes(N,a,b,c);
      
    


    return 0;
}