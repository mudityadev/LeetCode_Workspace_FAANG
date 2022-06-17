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


bool subset(vector<int> v, int sum){
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

bool equalSumPartition(vector<int> v){
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum+=v[i];
    }

    if(sum%2!=0){
        return false;
    }else{
        return subset(v, sum/2);
    } 
}



int main()
{
   // check the equal sum partition
    vector<int> v = {1,5,11};

    if(equalSumPartition(v)){
        cout <<"YES, we can do it \n";
    }else{
        cout <<"Not Possible\n";
    }

    

}