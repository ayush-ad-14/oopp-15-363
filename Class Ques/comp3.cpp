#include <iostream>
using namespace std;

class comp{
    int real,img;
    public:
    comp(int r = 0, int i = 0) : real(r), img(i) {}

    friend comp operator+(comp c, comp d);
    void show()
    {
        cout << real << "," << img << endl;
    }
};
comp operator+(comp c, comp d){
    return comp(c.real+d.real,c.img+d.img);
}
int main(){
    comp c1(5,20);
    comp c2(15,9);
    c1.show();
    c2.show();
    comp c3=c1+c2;
    c3.show();
}