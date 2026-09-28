#include <iostream>
using namespace std;
class Comp{
    int real,img;
    public:
    Comp(int r=0,int i=0):real{r},img{i}{}
    //  friend Comp operator+(Comp c1, Comp c2);
    friend Comp operator+(Comp c1,int x);

        //Comp operator+(Comp c) {
        // Comp temp;
        // temp.real = real + c.real;
        // temp.img = img + c.img;
        // return temp;
        // return Comp(this->real+c.real,this->img+c.img);
        // return Comp(real+c.real,img+c.img);
        // int r=this->real+c.real;
        // int i=this->img+c.img;
        // Comp t(r,i);
        // return t;
    

    void show(){
        cout<<real<<","<<img<<endl;
    }
};

Comp operator+(Comp c1,int x){
    return Comp(c1.real+x,c1.img+x);
}
//     Comp operator+(Comp c1, Comp c2) {
//     return Comp(c1.real + c2.real, c1.img + c2.img);
// }

int main(){
    Comp c1(5,20);
    Comp c2;
    c1.show();
    c2.show();
    Comp c3=c1+5;
    c3.show();
    return 0;
}