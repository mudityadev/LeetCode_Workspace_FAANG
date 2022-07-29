#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>


class Complex{
private:
    int real, img;
public:
    Complex(int r = 0, int i = 0 ){
        real = r;
        img = i;
    }


    Complex operator + (Complex const &obj){
        Complex res;

        res.img = img + obj.img;
        res.real = real + obj.real;

        return res;
    }

    void Display(){
        cout << real << " + i" << img << "\n";
    }
};


int main()
{
    Complex c1(10, 2);
    Complex c2(20, 5);
    // c1.Display();
    Complex c3 = c1 + c2;
    c3.Display();
    
}