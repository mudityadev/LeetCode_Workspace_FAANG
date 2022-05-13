#include<bits/stdc++.h>
using namespace std;

void intersection(vector<vector<int>>& nums) {
    vector<int> ans;
    map<int, int> mp;
        for(auto aa : nums){
            for(auto a : aa){
                mp[a]++;
            }
        }

       for (auto it = mp.begin(); it!=mp.end(); it++)
        {
            if(it->second == nums.size()){
                ans.push_back(it->first);
            }
        }
    return ans;
}

int main()
{
    vector<vector<int>> v = {{3,1,2,4,5}, {1,2,3,4},{3,4,5,6}};
    intersection(v);
    
}