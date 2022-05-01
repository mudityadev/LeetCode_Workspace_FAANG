Dutch National Flag Algorithm
3 pointers
low pointer -> start
mid pointer -> start
high pointer-> last
[0 ----- low-1] -> 0
[high+1 ---- n] -> 2

if
mid -> 0 ->  swap(a[low++],a[mid++])
mid -> 1 ->  mid++
mid -> 2 ->  swap(a[mid], a[high])


class Solution {
public:
    void sortColors(vector<int>& nums) {
         int lo = 0; 
        int hi = nums.size() - 1; 
        int mid = 0; 

        while (mid <= hi) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
         
        
     }
};