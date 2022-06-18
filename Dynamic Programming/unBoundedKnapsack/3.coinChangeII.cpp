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

int coinChangeII(vector<int> &coins, int sum){
     int n = coins.size();
        vector<vector<int>> t(n+1, vector<int>(sum+1));
        
        for(int i=0;i<n+1;i++) t[i][0] = 0;
        for(int i=0;i<sum+1;i++) t[0][i] = INT_MAX-1;
        
        for(int i=1, j=1;j<sum+1;j++){
            if(j%coins[i]==0)
                t[i][j] = j/coins[i];
            else
                t[i][j] = INT_MAX-1;
        }
        
        for(int i=2;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(coins[i-1]<=j)
                    t[i][j] = min(t[i][j-coins[i-1]]+1, t[i-1][j]);   
                else
                    t[i][j] = t[i-1][j];
            }
        }
        return t[n][sum];   
}   


int main()
{
    vector<int> coins{1,2,3};
    int sum = 5;

    cout << coinChangeII(coins, sum) << " ";

}