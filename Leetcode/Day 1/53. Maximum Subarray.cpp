// * 2 approaches
// * 1. take all nums by using 3 loops
// * 2. use kadane's algo 

// * Initialize:
// *     max_so_far = INT_MIN
// *     max_ending_here = 0

// * Loop for each element of the array
// *   (a) max_ending_here = max_ending_here + a[i]
// *   (b) if(max_so_far < max_ending_here)
// *             max_so_far = max_ending_here
// *   (c) if(max_ending_here < 0)
// *             max_ending_here = 0
// * return max_so_far


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;
        for(auto it : nums){
            sum+= it;
            maxi = max(sum, maxi);
            if(sum<0) sum = 0;
        }
        return maxi;
    }
};