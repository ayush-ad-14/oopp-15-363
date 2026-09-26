#include<bits/stdc++.h>
using namespace std;

class point
{
    int x,y; 
public:
    point(int x=0,int y=0):x{x},y{y}{}

    friend ostream &operator<<(ostream &os,point p);

    friend point operator+(point p1,point p2);
};
    point operator+(point p1,point p2)
    {
        return point(p1.x+p2.x,p1.y+p2.y);
    }

    ostream &operator<<(ostream &os,point t)  /// operator overloading using method chaining using friend function
    {
        os<<"("<<t.x<<","<<t.y<<")"<<endl;
        return os;
    }
int main()
{
    point p(2,5),q(3,4);
    cout<<p;    // left shift operator overloading
    cout<<q;

    point r=p+q;
    cout<<r;
    cout<<p<<q<<r;  //method chaining 
    return 0;
}