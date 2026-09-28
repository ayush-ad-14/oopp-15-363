#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    void input()
    {
        cin >> real >> img;
    }
    void show()
    {
        cout << real;
        if (img >= 0)
        {
            cout << "+" << img << "i" << endl;
        }
        else
        {
            cout << img << "i" << endl;
        }
    }
    void add(Complex p) {
        real = real + p.real;
        img = img + p.img;
    }
   
    void addi(int a , int b) {
        real = real + a;
        img = img + b;
    }
    void addit(Complex p,Complex q) {
        real = p.real + q.real;
        img = p.img + q.img;
    }
     Complex additi(int a , int b) {
        Complex m;
        m.real = real + 5;
        m.img = img + 10;
        return m;
    }
};

int main() {
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
    c1.add(c2);
    c1.show();
    c2.add(c1);
    c1.show();
    c2.addi(5 ,2);
    c1.addi(9 , 8);
    c3.addit(c1,c2);
    c3.show();
    c1.additi(5,10);
    return 0;
}
