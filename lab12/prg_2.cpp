#include<bits/stdc++.h>
using namespace std;

class point
{
    int x,y; 
public:
    point(int x=0,int y=0):x{x},y{y}{}

    void show(){
        cout<<"("<<x<<","<<y<<")";
    }
    friend point operator+(point p1,point p2);
};
    point operator+(point p1,point p2)
    {
        return point(p1.x+p2.x,p1.y+p2.y);
    }
int main()
{
    point p(2,5),q(3,4);
    cout<<"\nPoint 1:";
    p.show();
    cout<<"\nPoint 2:";
    q.show();

    point r=p+q;
    cout<<"\nPoint 3:";
    r.show();
    return 0;
}