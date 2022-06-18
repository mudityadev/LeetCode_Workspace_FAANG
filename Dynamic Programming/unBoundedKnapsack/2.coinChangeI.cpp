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

int coinChangeI(vector<int> &coin, int sum){
    int n = coin.size();
    vector<vector<int>> t(n+1, vector<int>(sum+1));

    for(int i=0;i<sum+1;i++) t[0][i] = 0;
    for(int i=0;i<n+1;i++) t[i][0] = 1;

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < sum+1; j++)
        {
            if(coin[i-1]<=j){
                t[i][j] = t[i][j-coin[i-1]] + t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    printVec(t);
    return t[n][sum];
}   


int main()
{
    vector<int> coin {1,2,3};
    int sum = 5;

    cout << coinChangeI(coin, sum) << " ";

}