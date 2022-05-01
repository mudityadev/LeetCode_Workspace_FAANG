#include<bits/stdc++.h>
using namespace std;


struct Node{
    Node* arr[26];
    int count;
};


Node* insert(string &str, Node* root){
    int in;
    Node* curr = root;
    for(int i=0;i<str.length();i++){
        in = s[i] - 'a';
        if (cur->arr[in] == NULL)
            cur->arr[in] = new Node();
        cur->arr[in]->count++;
        cur = cur->arr[in];
    }
    return root;
}

int find(string s, Node* root)
{
    int in, count = 0;
    Node* cur = root;
 
    for (int i = 0; i < s.length(); i++) {
        in = s[i] - 'a';
        if (cur->arr[in] == NULL)
            return 0;
        cur = cur->arr[in];
        count++;
 
        if (count == s.length())
            return cur->count;
    }
    return 0;
}
 

int countPrefixes(vector<string>& words, string s) {
    Node* root = new Node();
    
    for (int i = 0; i < words.size(); i++)
    {
        root = insert(root->arr[i], root);
    }

    int cnt = 0;
    cnt = find(s, root);        
}


int main()
{
    vector<string> words = {"a","b","c","ab","bc","abc"};
    string s = "abc";

    cout << countPrefixes(words, s) << " ";
    
}