#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>


int minimumSubsetSumDifference(vector<int> nums, int range){
    int n = nums.size();
    // initialization
    vector<vector<bool>> t(n+1, vector<bool>(range));
    // base condition
    for(int i=0;i<range+1;i++) t[0][i] = false;
    for(int i=0;i<n+1;i++) t[i][0] = true;

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < range+1; j++)
        {
            if(nums[i-1]<=j){
                t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    int diff = INT_MAX;
    for (int j = range / 2; j >= 0; j--) {
        if (t[n][j] == true) {
            diff = range - 2 * j;
            break;
        }
    }
    return diff;
}




int main()
{
    vector<int> v {1,2,7};
    // vector<int> v {1,6,11,5};
    int range  = 0;
    for(auto x : v){
        range+=x;
    }

    cout << "ans = " << minimumSubsetSumDifference(v,range) << "\n";


}