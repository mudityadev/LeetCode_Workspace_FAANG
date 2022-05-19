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

void iterators_and_ranges(){
    // vi v{9,8,7,6,5,4,3,2,1};
    // print_element(v);
    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());
    // random_shuffle(v.begin(), v.end());
    // print_element(v); 

    // set<int> s;
    // for (int i = 0; i < 10; i++)
    // {
    //     s.insert(i*2);
    // } 
    // print_element(s);
    // auto it = s.lower_bound(2);
    // auto it1 = s.upper_bound(2);
    // cout << (*it) << endl;
    // cout << (*it1) << endl;


}

void lower_and_upper_bound(){
    vi v{1,2,3,88,99};
    print_element(v);

    // auto it = lower_bound(v.begin(), v.end(),5);
    auto it = upper_bound(v.begin(), v.end(),88);
    if(it == v.end()){
        cout << "Not found";
        return;
    }
    cout << *it <<  endl;


}


//? bitset -> A bitset is an array whose each value is either 0 or 1

// void bitset_array(){
  
//     // bitset<10> s(string("00100111"));
//     // for (int i = 0; i < 6; i++)
//     //     cout << s[i] << " ";
//     // cout << endl;

//     bitset<10> a(string("1001100110"));
//     bitset<10> b(string("0101001110"));
    
//     cout << "AND " << (a&b) <<"\n";
//     cout << "OR " << (a|b) <<"\n";
//     cout << "XOR " << (a^b) <<"\n";

//     // cout << a.count() << "\n"; // count of 1 bit
//     // cout << b.count() << "\n"; // count of 1 bit
// }


// ? Deque ->  deque is a dynamic array whose size can be efficiently 
// ?           changed at both ends of the array
// ? Implementation -> a deque provides the functions 
// ? push_back and pop_back | push_front and pop_front

// void dequee(){
//     deque<int> d;
//     d.push_back(5);
//     d.push_back(2);
//     d.push_front(1);
//     d.push_front(3);
//     print_element(d);
//     d.pop_back();
//     d.pop_front();
//     print_element(d);
// }


// ? Stack -> A data structure that provides two O(1) time operations:
// ? push(x) , top() , pop() from top of stack

// void stack_ds(){
//     stack<int> s;
//     s.push(21);
//     s.push(4);
//     s.push(10);
//     s.push(15);
//     cout << s.size() << endl;    
//     for (int i = 0; i <=s.size()+1; i++)
//     {
//         cout << s.top() << " "; // 15 10 4 
//         s.pop();
//     }
//     cout << endl;
//     cout << s.size() << endl;    
//     cout << s.top() << endl;    
// }



// ? Queue ->  Queue provides 2 -> O(1) time operations: 
// ? adding an element to the end
// ? removing the first element 
// void queuee(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     cout << q.front() << "\n";
//     q.pop();
//     cout << q.front() << "\n";
//     q.pop();
//     cout << q.front() << "\n";
//     // cout << q.front() << "\n";
// }


//? Priority Queue ->  Priority Queue maintains a set of elements 
// void pqueue(){
//     priority_queue<int> pq;
//     pq.push(3);
//     pq.push(16);
//     pq.push(9);
//     cout << pq.top() << endl;
//     pq.pop();
//     cout << pq.top() << endl;
//     pq.pop();
//     cout << pq.top() << endl;

//     //? If we want to create a priority queue that supports finding and removing the smallest element, we can do it as follows
//     // priority_queue<int,vector<int>,greater<int>> q;
// }




int main()
{
    // set_operation();
    // making_map();
    // iterators_and_ranges();
    // lower_and_upper_bound();
    // bitset_array();
    // dequee();
    // stack_ds();
    // queuee();
    pqueue();


    
    

    
    
}