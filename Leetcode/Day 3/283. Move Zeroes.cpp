class Solution {
public:
    void moveZeroes(vector<int>& num) {
        for(int i=0, x = 0;i<num.size();i++){
            if(num[i]) swap(num[i], num[x++]);
        }
    }
};