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
    point operator+(point p)
    {
        int a=x+p.x;
        int b=y+p.y;
        point q(a,b);
        return q;
    } 
};
int main()
{
    point p(5,6),q(7,8);
    cout<<"\nPoint 1:";
    p.show();
    cout<<"\nPoint 2:";
    q.show();

    point r=p+q;
    cout<<"\nPoint 3:";
    r.show();
    return 0;
}