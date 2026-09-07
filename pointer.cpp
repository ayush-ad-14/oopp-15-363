#include <iostream>
using namespace std;
 class Point{
    int *y;
    int *x;
    void show(){
        cout<<x<<","<<y<<endl;
    }
    Point(int a,int b):{
        x=new int(a)
    }
 };
int main(){
    
    return 0;
}
// It is same as constructor which accept object as arguements and object should be cosntant and by reference. It copies each member value to variables.