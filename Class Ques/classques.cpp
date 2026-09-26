#include<bits/stdc++.h>
using namespace std;
class complexno
{
    private:
    int real , img;
    public:
    void input(){
        cout<<"enter:";
        cin>>real>>img;
    }
    void show(){
        cout<<real;
        if(img>=0){
            cout<<"+"<<img<<"i"<<endl;
        }else{
            cout<<img<<"i"<<endl;
        }
    }
    void add(int a, int b){
        real-real+a;
        img=img+b;
    }
    void add(complexno p){
        p.show();
        real+=p.real;
        img+=p.img;
    }
};
int main(){
    complexno c1,c2;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
    c1.add(2,5);
    c1.show();
    c2.add(c1);
    c2.show();
}