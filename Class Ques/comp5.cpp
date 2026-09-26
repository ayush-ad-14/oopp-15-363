// when left side of any binary operator is univeersal(int,long,floaat,char,any predefined datatype) 
// then that operator must be overloaded as friend function.

#include <iostream>
using namespace std;

class comp{
    int real,img;
    public:
    comp(int r = 0, int i = 0) : real(r), img(i) {}

    friend comp operator+(int x,comp p);

    void show()
    {
        cout << real << "," << img << endl;
    }
};
comp operator+(int x, comp p){
    return comp(x+p.real,x+p.img);
}
int main(){
    comp c1(5,20);
    comp c2(15,9);
    c1.show();
    c2.show();
    comp c3=5+c1;
    c3.show();
}