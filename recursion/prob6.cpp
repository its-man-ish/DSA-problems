#include<bits/stdc++.h>
using namespace std;
/*
Tower of Hanoi



*/
void TOH(int N, int a, int b, int c)
{
  
  if(N>0){
      TOH(N-1,a,c,b);
      cout<<a<<" "<<c<<endl;
      TOH(N-1,b,a,c);
  }
}

int main()
{
    int N=3,a=1,b=2,c=3;
    TOH(N,a,b,c);
    

    return 0;
}