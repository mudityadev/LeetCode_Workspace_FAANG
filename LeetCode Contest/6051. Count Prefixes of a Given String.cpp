
//* Count Prefixes of a Given String
//* Minimum Average Difference
//* Count Unguarded Cells in the Grid
//* Escape the Spreading Fire


#include<bits/stdc++.h>
using namespace std;

// Input: words = ["a","b","c","ab","bc","abc"], s = "abc"
// Output: 3

int countPrefixes(vector<string>& words, string s) {
    int count = 0;
    for(int i=0;i<words.size();i++){
        if(words[i] == s[i]){
            count++;
        }
    }

    return count;


        
}


int main()
{
    vector<string> words = {"a","b","c","ab","bc","abc"};
    string s = "abc";

    cout << countPrefixes(words, s) << " ";
    
}