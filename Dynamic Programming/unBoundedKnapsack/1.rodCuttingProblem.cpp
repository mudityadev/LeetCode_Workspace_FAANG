// ? Rod Cutting Problem
// ? we we don't choose val[n-1] ❌ -> processed
// ? we we  choose val[n-1] 🌞 -> you can still use it

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

printVec(auto v){
    cout <<"\n Print 2D array = \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << i << " | ";
        for (int j = 0; j < v[i].size(); j++)
        {
            // cout << j;
            cout  << v[i][j] << " ";
        }
        cout << "\n";
    }
}

int unBoundedKnapsack(vector<int> lengthOfRod, vector<int> priceOfCut, int w, int n){
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
            if(lengthOfRod[i-1]<=j){
                t[i][j] = max(priceOfCut[i-1]+t[i][j-lengthOfRod[i-1]], 0+ t[i-1][j]);  // ? this is unbounded knapsack
            }
            // not adding
            else if(lengthOfRod[i-1] > j){
                t[i][j] = 0 + t[i-1][j];
            }
        }
    }
    // printVec(t);
    return t[n][w];
}

int main()
{
    vector<int>length {1,2,3,4,5,6,7,8};    
    vector<int>price {1,5,8,9,10,17,17,20};    
    int sizze = 8;
    int n = length.size();

    cout << unBoundedKnapsack(length, price, sizze, n) << " ";

}