#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair <int, string> p;
    //method 1 to initialize
    p=make_pair(19,"JE0494");
    cout<<p.first<<" "<<p.second<<endl;
    //method 2 to initialize

    p={30,"maths"};
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}