#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>


// 📦 there is always be a struct node
struct Node{
    Node *links[26];
    bool flag = false;

    bool containKey(char ch){
        return (links[ch-'a']!=NULL);
    }

    void put(char ch, Node* node){
        links[ch-'a'] = node;
    }

    Node* get(char ch){
        return links[ch-'a'];
    }

    bool setEnd(){
        flag = true;
    }

    bool isEnd(){
        return flag;
    }
};

class Trie{
private:
    Node *root;

public:
    Trie(){
        root = new Node();
    }
    // tc -> O(len)
    void insert(string word){
        Node* node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if(!node->containKey(word[i])){
                // inserting the letter
                node->put(word[i], new Node());
            }
            // move to the reference trie
            node = node->get(word[i]);
        }

        node->setEnd();        

    }

    bool search(string word){
        Node* node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if(node->containKey(word[i])){
                return false;
            }

            node = node->get(word[i]);
        }

        return node->isEnd();
        
    }


    bool startWith(string prefix){
        Node* node = root;

        for (int i = 0; i < prefix.length(); i++)
        {
            if(node->containKey(prefix[i])){
                return false;
            }

            node = node->get(prefix[i]);
        }
        return true;
    }
};


int main()
{
    Trie t;

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        t.insert(s);
    }

    string word = "apple";

    if(t.startWith(word)){
        cout << word << " present" <<"\n";
    }
    
}