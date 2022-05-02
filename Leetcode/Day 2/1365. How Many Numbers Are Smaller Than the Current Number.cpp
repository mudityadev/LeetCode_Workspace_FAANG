class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int c = 0;
        vector<int> ans;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            for(int j = 0; j<n;j++){
                if(nums[i]>nums[j] && nums[i]!=nums[j]){
                    c++;
                }
            }
            ans.push_back(c);
            c = 0;
        }
        return ans;
    }
};