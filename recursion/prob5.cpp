#include<bits/stdc++.h>
using namespace std;
/*
subset of string



*/
void Subset(string s, string curr="", int i =0)
{
  if(i==s.length())
  {
     cout<<curr;
     return;
  }

  Subset(s,curr,i+1);
  Subset(s,curr+s[i],i+1);
}

int main()
{
    int N=23,a=11,b=9,c=12;
    
       
        cout<<"maxRopes : "<<maxRopes(N,a,b,c);
      
    


    return 0;
}