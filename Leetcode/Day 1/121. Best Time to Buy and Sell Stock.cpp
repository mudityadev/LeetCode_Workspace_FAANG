// * e will linearly travel the array. We can maintain a minimum from the starting of the array and compare it with every element of the array, if it is greater than the minimum then take the difference and maintain it in max, otherwise update the minimum.

// * Approach:

// * Create a variable maxPro and mark it as 0.
// * Create a variable minPrice and mark it as max_value.
// * Run a for loop from 0 to n.
// * Update the minPrice at if it greater than current element of the array
// * Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
// * Return the maxPro.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int miniPrice = INT_MAX;
        for(int i=0;i<prices.size();i++){
            miniPrice = min(miniPrice, prices[i]);
            maxPro = max(maxPro, prices[i]-miniPrice);
        }
        
        return maxPro;
    }
};