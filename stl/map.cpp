#include <bits/stdc++.h>
using namespace std;

void Print(map<int,string>&m){
    cout<<"Size of map"<<m.size()<<endl;
    for (auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}

void mapFind(map<int,string>&m,int x){
    auto it = m.find(x); //O(log(n))
    
    cout<<(*it).first<<" "<<(*it).second;
}

int main(){
    map<int,string> m;
    m[1]="Manish";
    m[2]="Raju";
    m[3]="Shyam";
   
   // Print(m);
    mapFind(m,2);
    
    return 0;


}