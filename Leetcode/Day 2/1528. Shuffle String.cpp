class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int, char> m;
        string str = "";
        for(int i=0;i<indices.size();i++){
            m[indices[i]] = s[i];
            
        }
        
        for(auto temp : m){
            str += temp.second;
        }
        return str;
      }
};