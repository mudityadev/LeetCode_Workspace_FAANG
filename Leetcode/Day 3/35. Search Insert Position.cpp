35. Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = 0;
        
        while(left<=right){
            mid = (left+right)/2;
            
            if(nums[mid] == target){
                break;
            }
            else if(left == right && target>nums[mid]){
                mid++;
                break;
            }
            
            else if(nums[mid]>target){
                right = mid-1;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
        }
        return mid;
        
    }
};