#include<bits/stdc++.h>

using namespace std;
class point
{
	private:
	int x, y;

	public:
	point(): x{0}, y{0}
	{
		cout<<"default constructor"<<endl;
	}  //default constructor // lazy constructor
	point(int p,int q): x{p},y{q}{
		cout<<"parametrized constructor"<<endl;
	}
	void show(){
		cout<<x<<","<<y<<endl;
	}
	point add(point s){
		// point t(x+s.x,y+s.y);
		// return t;
		
		return point(x+s.x,y+s.y);   // Nameless object creation
	}
};


int main(){
	point p(5,20),q(20,50);
	p.show();
	q.show();
	point r= p.add(q);
	r.show();
return 0;
}