#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout<<"size "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    
}

int main()
{
    
//vector<int> n; //Declaration of a vector
    /*
    int p = 34;
    n.push_back(p); //inseting value at the end of the vector array
    cout<<n[0];
    for (int i = 0; i < 10; i++)
    {
    n.push_back(i);
    }
    */

// vector of arrays
// vector<int>v[10]; //10 vectors are createdof zero size
   
   /*
    int N;
   cout<<"How many vectors ?"<<endl;
   cin>>N;
   vector<int> v[N];
   for (int i = 0; i < N; i++)
   {
       int n;
       cout<<"Enter size of "<<i<<"th vector: ";
       cin>>n;
       for (int j = 0; j < n; j++)
       {   
           int x;
           cin>>x;
           v[i].push_back(x);

       }
       
   }

   //printing vector of arras
   for (int i = 0; i < N; i++)
   {
       printVec(v[i]);
   }
   */
   
// VECTOR OF VECTORS
   vector <vector<int>> vec;
   int COL = 4;
   int ROW = 3;

   int num = 10;// number to insert
   for (int i = 0; i < ROW; i++)
   {
       vector <int> v1;
       for (int j = 0; j < COL; j++)
       {
           v1.push_back(num);
           num = num+10;
       }

       vec.push_back(v1);
       
   }

   //DISPLAYING 

   for (int i = 0; i < vec.size(); i++)
   {
       for (int j = 0; j < vec[i].size(); j++)
       {
           cout<<vec[i][j]<<" ";
       }
       cout<<endl;
       
   }
   
   
   

    return 0;
}