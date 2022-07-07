#include <bits/stdc++.h>
using namespace std;

//find the frequecny of uniq striings


int main(){
    map<string,int> m;
     for (int i = 0; i < 5; i++)
     {
           string s;
           cin>>s;
           m[s]++;
     }

     for(auto &a:m)
     {
         cout<<a.first<<" "<<a.second<<endl;
     }
     
    
    return 0;


}