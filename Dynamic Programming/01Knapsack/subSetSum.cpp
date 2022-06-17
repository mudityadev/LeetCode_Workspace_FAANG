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


bool subSetCheck(vector<int> v, int sum){
    // initization t[n+1][sum+1]
    vector<vector<bool>> t(v.size()+1, vector<bool>(sum+1));

    // base condition
    for(int i=0;i<sum+1;i++) t[0][i] = false;
    for(int i=0;i<v.size()+1;i++) t[i][0] = true;

    // looping start from 1
    for (int i = 1; i < v.size()+1; i++)
    {
        for (int j = 1; j < sum+1; j++)
        {
            if(v[i-1]<=j){
                t[i][j] = t[i-1][j-v[i-1]] || t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
        
    }
    
    
    
    // printVec(t);
    printVec(t);
    
    return t[v.size()][sum];
}


int main()
{
    vector<int> v{1,2,3};
    int sum = 7;

    if(subSetCheck(v,sum)){
        cout << "\nANS = " <<"YES";
    }else cout << "\nANS = " <<"NO\n";
    

}