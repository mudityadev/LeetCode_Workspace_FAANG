/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
           if(nums[i] == val){
              count++;
           }else{
               nums[i-count] = nums[i];
           }
        }
        return n-count;
    }
};
// @lc code=end

