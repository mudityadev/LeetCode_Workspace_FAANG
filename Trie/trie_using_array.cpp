#include<bits/stdc++.h>
using namespace std;
// using array
class Trie{
public:
    Trie(){}
    // insert
    void insert(string word){
        Trie* node = this;
        for(char ch : word){
            ch -= 'a';
            // checking if char is not present
            if(!node->next[ch]) {
            // create a node and put the element
            node->next[ch] = new Trie();
            node = node->next[ch]; 
            }            
        }
        node->is_word = true;
    }

    bool search(string word){
        Trie* node = this;
        for(auto ch : word){
            ch-='a';
            if(!node->next[ch]) {return false;}
            node = node->next[ch];
        }
        return node->is_word;
    }

    bool startWith(string prefix){
        Trie *node = this;
        for(char ch : prefix){
            ch-='a';
            if(!node->next[ch]){return false;}
            node = node->next[ch];
        }

        return true;
    }

private:
    Trie* next[26] = {};
    bool is_word = false;
};


int main()
{
    Trie* myTrie;
    myTrie->insert("hello");
    myTrie->insert("manu");
    if(myTrie->search("hello")){
        cout << " Hello is there \n";
    }else{ cout <<" no hello \n";}

    
}