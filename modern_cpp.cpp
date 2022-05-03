#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int age;
};

struct Exchange{
    int count;
    float rates[2];

// * list for only rates in constructor
// Exchange(initializer_list<float> r){
//     if(r.size() < 2) return;
//     auto i = r.begin(); // i is the iterator
//     rates[0] = *i;
//     i++;
//     rates[1] = *i; 
//     }
};


template<typename T, typename U> 
auto add(T a, U b){
    return a+b;
}


void extra(){
      Exchange e{1,2,3}; //* automatically assign the value in struct
    //  cout << e.count << " " << e.rates[1] << " " << e.rates[0] << endl;
    //  cout << add(0,'a') << " " << endl; // function using auto and template to return
    //  cout << add(string("hello")," sexy") << " " << endl; 
    // // * old way
    // int a = 12;
    // // * modern way
    // int a{12};

    // // * old way
    // string s = "manu";
    // // * modern way
    // string s{"muditya"}; 
    
    // // * old way
    // vector<int> b;
    // b.push_back(12);
    // // * modern way
    // vector<int> v{1,2,4,5};


    // * old way

    // * modern way
    map<string, string> captials {
        {"uk", "london"},
        {"india", "delhi"},
        {"mammy", "manu"}
    };

    //  cout << captials["uk"] << " ";
    //  cout << captials["mammy"] << " ";
    //  cout << endl;
    Student s{"muditya", 21}; // * constructor
    //  cout << s.name << " age " << s.age << " ";


    // assign using auto
    auto a = 0; // int
    auto b = 123.f; // float
    auto c = L"hello"; // char[]
    auto d = {12,3,1,4}; // list

}

bool is_positive(int n){
        return n = n > 0 ? true : false;
}


// enum

enum class newColor{
    red, green, blue;
};




int main()
{

    // * enum new
    newColor nc = newColor::blue; // assignment
    // newColor nc = blue; // illegal here

    // * new way to iterate the vector -> lymda function
    vector<int> scores{1,3,4,5,7};
    for_each(begin(scores), end(scores), [](int n){
        // cout << n << " ";
    });

    // * check if the value is position
    auto zero = 0;
    auto positive_is = [=](int n) {return n>zero;}; // [] -> =, zero, &zero
    // cout << positive_is(-2) << " ";


    // cout << is_positive(2) << " ";

    // find out fib number -> define the function type
    function<int(int)> fib = [&fib] (int x) { return x<2?1:fib(x-1)+fib(x-2);};
    cout << "fib = " << fib(5) << endl;    


    // range based for loop
    



}