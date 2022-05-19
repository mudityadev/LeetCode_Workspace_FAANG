#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>


// concept
void concepts(){
    // ? fruits
    // orange --> 0 
    // graps  --> 1
    // banana --> 2
    // apple  --> 3

    // person1 -> 0,1   --> 0011 }-> bit mask
    // person2 -> 2,3,1 --> 1110 }-> bit mask
    // person3 -> 1,3   --> 1010 }-> bit mask
    
}

// generate subset
vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    int subset_ct = (1<<n);
    vector<vector<int>> subsets;
    for (int mask = 0; mask < subset_ct; mask++)
    {
        vector<int> subset;
        for (int i = 0; i < n; i++)
        {
            if((mask&(1<<i))!=0){
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
    }

    return subsets;
}

int main()
{
    int n;cin>>n;
    vi v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    
}