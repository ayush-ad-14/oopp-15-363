#include<iostream>

using namespace std;

class comp{
    int real , img;

    public:
    comp(int r=0 ,int i=0):real{r},img{i}{}

    friend comp operator -(comp c);

    // comp operator -(){
    //     return comp(-real , -img);
    // }

    void show(){
        cout<<real<<" , "<<img<<endl;
    }
};

comp operator -(comp c){
    return comp( -c.real , -c.img);
}

//in unary operator overloading no argument required for member function 
//for friend function we require one agrument


int main(){
    comp c1(5,20);
    comp c2;
    c1.show();
    
    comp c3 = -c1;
    c3.show();

return 0;
}

// operator overloading two functions will be defined as a member functions. Zero arguments functions for prefix increment, decrement and one arguement (int) for postfix increment, decrement operator.