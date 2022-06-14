#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int tknapsack(vector<int> wt, vector<int> val, int w, int n){
    // created a 2D matrix
    vector<vector<int>> t(n+1, vector<int>(w+1));
    // initalization -> base condition -> 0 row and col -> '0'
    for(int i=0; i<n+1;i++) t[i][0] = 0;
    for(int i=0; i<w+1;i++) t[0][i] = 0;
    // choice diagram code
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < w+1; j++)
        {
            // if we are adding
            if(wt[i-1]<=j){
                t[i][j] = max(val[i-1]+t[i-1][j-wt[i-1]], 0+ t[i-1][j]);
            }
            // not adding
            else if(wt[i-1] > j){
                t[i][j] = 0 + t[i-1][j];
            }
        }
        
    }
    return t[n][w];
}

int main()
{
    vector<int> wt {1,3,4,5};    
    vector<int>val {1,4,5,7};    
    int capacity = 7;
    int n = wt.size();

    cout << tknapsack(wt, val, capacity, n) << " ";

}