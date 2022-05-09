/*
 * @lc app=leetcode id=208 lang=cpp
 *
 * [208] Implement Trie (Prefix Tree)
 */

// @lc code=start
class Trie {
private:
    unordered_map<char, Trie*> next = {};
    bool is_word = false;


public:
    Trie() {}
    
    void insert(string word) {
        Trie* node = this;
        for(char ch : word){
            if(!node->next.count(ch)){node->next[ch] = new Trie;}
            node = node->next[ch];
        }
        node->is_word = true;
    }
    
    bool search(string word) {
        Trie* node = this;
        for(char ch: word){
            if(!node->next.count(ch)) return false;
            node = node->next[ch];
        }
        // only difference
        return node->is_word;
    }
    
    bool startsWith(string prefix) {
        Trie* node = this;
        for(char ch: prefix){
            if(!node->next.count(ch)) return false;
            node = node->next[ch];
        }

        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end

