#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int countSubSetSum(vector<int> v, int sum){
    // initization t[n+1][sum+1]
    vector<vector<int>> t(v.size()+1, vector<int>(sum+1));

    // base condition
    for(int i=0;i<sum+1;i++) t[0][i] = 0;
    for(int i=0;i<v.size()+1;i++) t[i][0] = 1;

    // looping start from 1
    for (int i = 1; i < v.size()+1; i++)
    {
        for (int j = 1; j < sum+1; j++)
        {
            if(v[i-1]<=j){
                t[i][j] = t[i-1][j-v[i-1]] + t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
        
    }
    
    return t[v.size()][sum];
}


int countSubSetSumGivenDiff(vector<int> nums, int diff){
    int sum = 0;
    for(auto x : nums) {
        sum+=x;
    }

    int s1 = (diff+sum)/2;

    return countSubSetSum(nums, s1);

}




int main()
{
    vector<int> v{1,1,2,3};
    int diff = 1; 
    // out - 3
    cout << countSubSetSumGivenDiff(v, diff) << " ";

}