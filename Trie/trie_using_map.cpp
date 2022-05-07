#include<bits/stdc++.h>
using namespace std;

class Trie{
public:

    Trie(){}

    // insert
    void insert(string word){
        Trie* node = this;
        for(char ch : word){
            // if char is not present
            if(!node->next.count(ch)){node->next[ch] = new Trie();}
            node = node->next[ch];
        }
        node->is_word = true;
        delete node;
    }

    // search
    bool search(string word){
        Trie* node = this;
        for(char ch : word){
            if(!node->next.count(ch)) {return false;}
            node = node->next[ch];
        }

        return node->is_word;
    }

    // startwith
    bool startwith(string prefix){
        Trie* node = this;

        for(char ch: prefix){
            if(!node->next.count(ch)) {return false;}
            node = node->next[ch];
        }

        return true;
    }


private:
    unordered_map<char, Trie*> next;
    bool is_word = false;
};


int main()
{

}