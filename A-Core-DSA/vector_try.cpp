#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int minMaxGame(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return;
    int i =0;
    while (0 <= i < n / 2)
    {
        if(i%2==0){
            newNum[i] = min(nums[2 * i], nums[2 * i + 1]);
        } else{
            newNum[i] = max(nums[2 * i], nums[2 * i + 1]);
        }
    }
    
    return nums.back();
    
}

int main()
{
    vector<int> v{1,3,5,2,4,8,2,2};
    cout << minMaxGame(v) << " ";    
}