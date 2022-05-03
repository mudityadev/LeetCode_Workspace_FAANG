class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        reverse(digits.begin(), digits.end());
        int n = digits.size();
        for(int i=0;i<n;i++){
            digits[i] += carry;
            
            if(digits[i] >= 10){
                digits[i]-=10;
                carry = 1;
            }
            
            else{
                carry = 0;
            }
        }
        
        if(carry){
            digits.push_back(1);
        }
        
        reverse(digits.begin(), digits.end());
        
        return digits;
        
    }
};