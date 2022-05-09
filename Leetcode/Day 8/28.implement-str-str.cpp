/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() == 1) return 0;
        int j = 0;
        int count =0;
        for (int i = 0; i < haystack.length(); i++)
        {
            if(haystack[i] == needle[j]){
                count++;
                j++;
            }

        }
        if(count==0){
            return -1;
        }
        return count;
        
    }
};
// @lc code=end

