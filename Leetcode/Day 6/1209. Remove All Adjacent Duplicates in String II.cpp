
class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,short>> st;
        string res;
        for(auto ch : s){
            if(st.empty() || st.back().first!=ch)
                st.push_back({ch, 0});
            if(++st.back().second == k)
                st.pop_back();
        }
        for(auto& p: st)
            res+=string(p.second, p.first);
        return res;
    }
};


class Solution {
public:
    string removeDuplicates(string s, int k) {
        int count=1;
        for (int i = 1; i < s.length(); i++)
        {
            if(s[i]==s[i-1]) count++;
            else count = 1; 
            if (count == k)
            {
                string str = s.substr(0,i-k+1)+s.substr(i+1);
                return removeDuplicates(str, k);
            }
        }
        return s;        
    }
};


// * Input: s = "abcd", k = 2
// * Output: "abcd"
// * Explanation: There's nothing to delete.
// * Example 2:

// * Input: s = "deeedbbcccbdaa", k = 3
// * Output: "aa"
// * Explanation: 
// * First delete "eee" and "ccc", get "ddbbbdaa"
// * Then delete "bbb", get "dddaa"
// * Finally delete "ddd", get "aa"

