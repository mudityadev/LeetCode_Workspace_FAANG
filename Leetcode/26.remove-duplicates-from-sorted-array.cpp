/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if(nums[i-1] == nums[i]) count++;
        else (nums[i - count] = nums[i]);
    }
    return n - count;
    }
};
// @lc code=end

