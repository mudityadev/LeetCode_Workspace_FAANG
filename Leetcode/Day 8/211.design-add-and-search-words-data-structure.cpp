/*
 * @lc app=leetcode id=211 lang=cpp
 *
 * [211] Design Add and Search Words Data Structure
 */

// @lc code=start
class WordDictionary {
private:
    unordered_map<char ,WordDictionary*> next = {};
    bool is_word = false;

public:
    WordDictionary() {}
    
    void addWord(string word) {
        WordDictionary* node = this;
        for(char ch : word){
            if(!node->next.count(ch)) {node->next[ch] = new WordDictionary();}
            node = node->next[ch];
        }

        node->is_word = true;
    }
    
    bool search(string word) {
        WordDictionary* node = this;
        for(char ch : word){
            if(ch == '.') {
               // do it afterwards
               // error is coming 
                }
            };
            if(!node->next.count(ch)) {return false;}
            node = node->next[ch];
        }

        return node->is_word;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
// @lc code=end

