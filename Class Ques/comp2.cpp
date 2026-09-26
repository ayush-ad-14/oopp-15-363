#include <iostream>
using namespace std;

class comp{
    int real,img;
    public:
    comp(int r = 0, int i = 0) : real(r), img(i) {}

    comp operator+(comp c)
    { 
        // 1 this->real,this->img;
        // c.real,c.img2
        // int r=this real+c.real;
        // int i=this.img+c.img;
        // const t(r,i);
        // return t;
        // return comp(this->real+c.real,this->img+c.img);
     return comp(real+c.real,img+c.img);

    }
    void show()
    {
        cout << real << "," << img << endl;
    }
};
int main(){
    comp c1(5,20);
    comp c2(15,9);
    c1.show();
    c2.show();
    comp c3=c1+c2;
    c3.show();
}