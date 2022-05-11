#include<iostream>
#include<string>

using namespace std;

int main()
{

// * increase the speed for IO
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int a;
    cin>>a;
    int b,c;
    cin>>b>>c;
    string s;
    cin>>s;
    cout << (a+b+c) << " " << s << endl;
}