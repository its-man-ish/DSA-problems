#include<bits/stdc++.h>
using namespace std;

//  Stock Buy and Sell Problem.

int stockProfit(int price[],int n){

    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i]>price[i-1])
        {
            profit+=(price[i]-price[i-1]);
        }
        
    }
    
    return profit;
  
   
   

}

int main()
{
    int arr[] = {1,5,3,8,12};
   
   int profit = stockProfit(arr,5);
   cout<<"Total profit: "<<profit;
    
    
    

    return 0;
}