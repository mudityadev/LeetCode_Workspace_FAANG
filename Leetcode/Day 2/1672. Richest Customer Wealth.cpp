class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      
        int max_money = 0;
        
        for(auto rows : accounts){
            int temp = 0;
            for(auto r : rows){
                temp+=r;
                max_money = max(temp, max_money);
            }
        }
        
        return max_money;
    }
};