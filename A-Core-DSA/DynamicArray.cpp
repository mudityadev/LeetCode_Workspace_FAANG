#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

void print_element(auto v){
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
}

// //? Dynamic Array
// void dyanmic_array(){
//      vi v;
//     int n;cin>>n;
//     int x;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>x;
//         v.push_back(x);
//     }
//     print_dyanmic_array(v);
//     cout << "After Pop back " << endl;
//     v.pop_back();
//     v.pop_back();
//     print_dyanmic_array(v);
// }

// //? strings in stl

// void strign_all(){
//     string a = "muditya";
//     // string b = a+a;
//     // cout << b << endl;
//     // b[5] = 'v';   
//     cout << a << endl;

//     string c = a.substr(3,2);
//     cout << c << endl;
// }


// // ? Set operations
// void set_operation(){
//     set<int> s;
//     s.insert(1);
//     s.insert(3);
//     s.insert(6);
//     // s.erase(3);
//     // cout << s.count(3) << endl;
//     print_element(s);
//     // cout << s.count(6) << endl;
// }

// // ? Map Structures
// // map -> balanced binary tree -> O(log N)
// // unordered_map -> hashing -> O(1)
// void making_map(){
//     map<int, string> mp;
//     mp[0] = "manu";
//     mp[1] = "Muditya";
//     mp[2] = "samreen";
//     cout << mp[0] <<" " << mp[1] << "\n";
//     if(mp.count(10)){
//         cout << 1 << " is exist" << endl;
//     }
// }


//? Iterators and ranges - pg 50

int main()
{
//    set_operation();
    making_map();
    
    
}