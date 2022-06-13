#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int knapsack(vector<int> wt, vector<int> val, int capacity, int n){
    if(n == 0 || capacity == 0) return 0;

    if(wt[n-1]<capacity){
        return max((wt[n-1]+knapsack(wt, val, capacity-wt[n-1], n-1)), knapsack(wt, val, capacity, n-1));
    }

    else if(wt[n-1]>capacity){
        return knapsack(wt, val, capacity, n-1);
    }
}



int main()
{
    vector<int> wt {1,3,4,5};    
    vector<int>val {1,4,5,7};    
    int capacity = 7;
    int n = wt.size();

    cout << knapsack(wt, val, capacity, n) << " ";


}