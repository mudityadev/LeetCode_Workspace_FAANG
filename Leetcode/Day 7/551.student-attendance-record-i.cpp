/*
 * @lc app=leetcode id=551 lang=cpp
 *
 * [551] Student Attendance Record I
 */

// @lc code=start
class Solution {
public:
    bool checkRecord(string s) {
        int l=0, a = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'A') a++;
            if(s[i] == 'L') l++;
            else l = 0;
            if(a>=2 || l>2) return false;   
        }

        return true;        
        
    }
};
// @lc code=end

