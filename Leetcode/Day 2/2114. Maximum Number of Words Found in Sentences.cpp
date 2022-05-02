class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        int intercount = 0;
        for(int i=0;i<sentences.size();i++){
            string str = sentences[i];
            intercount = count(str.begin(), str.end(), ' ');
            maxi = max(intercount, maxi);
        }
        
        return maxi+1;
    }
};