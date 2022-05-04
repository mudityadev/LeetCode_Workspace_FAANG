1773. Count Items Matching a Rule
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string key, string val) {
        
        int idx = key == "type" ? 0 : key == "color" ? 1:2;
        return count_if(begin(items), end(items), [&](auto &i){
            return i[idx] == val;
        });
        
        
        
        int nMatch = 0;
        
        if(ruleKey == "name"){
            for(int i =0;i<items.size();i++){
                if(ruleValue == items[i][2])
                    nMatch++;
            }
        }
        
        if(ruleKey == "color"){
            for(int i =0;i<items.size();i++){
                if(ruleValue == items[i][1])
                    nMatch++;
            }
        }
        
        
        if(ruleKey == "type"){
            for(int i =0;i<items.size();i++){
                if(ruleValue == items[i][0])
                    nMatch++;
            }
        }
        
        
        return nMatch;
        
    }
};