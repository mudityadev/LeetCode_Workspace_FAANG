class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int d = 0;
        for(int i=n;i<nums.size();i++){
            ans.push_back(nums[d]);
            ans.push_back(nums[i]);
            d++;
        }
        
        return ans;
    }
};