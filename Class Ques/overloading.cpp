#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:
    complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    show(){
        cout<<"real="<<real<<" img="<<img<<endl;
    }
    complex operator+(complex c){
        return complex(real)
    }
};
int main(){
    complex c1(3,4),c2(5,6),c3;
    c3=c1+c2;
    c3.show();
    return 0;
}