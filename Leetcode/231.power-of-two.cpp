/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        // * bit manipulation
        if(n<=0) return false;
        return ((n&(n-1)) == 0);

        // * using modulus
        // if(n==0) return false;
        // while(n%2==0){
        //     n/=2;
        // }
        // return (n==1);
    }
};
// @lc code=end

