// ? 🤪 Memoization -> Top - Down 
// ? 😵 Tabulation -> Bottom - Up
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

// ? 1st Step -> memoization 🤯
vector<vector<int>> dp(102, vector<int> (1002, -1));

// recusive function 🔁
int knapsack(vector<int> wt, vector<int> val, int capacity, int n){
    // base condition 🚫
    if(n == 0 || capacity == 0) return 0;

    // ? 2nd Step -> if element already present in 2D dp 🔎
    if(dp[n][capacity]!=-1) return dp[n][capacity];

    // find the max profit -> choice diagram 👍
    if(wt[n-1]<capacity){
        // ? before return, store the value in 2D array 😊
        return dp[n][capacity] = max((wt[n-1]+knapsack(wt, val, capacity-wt[n-1], n-1)), knapsack(wt, val, capacity, n-1));
    }
    // choice diagram 👎
    else if(wt[n-1]>capacity){
        return dp[n][capacity] = knapsack(wt, val, capacity, n-1);
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