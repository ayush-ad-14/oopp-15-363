#include<bits/stdc++.h>
using namespace std ;

class Account {
    private :
    int amt ;
    string name ;
public :
    void withdraw (int rs){
        amt-=rs ;
        cout<<amt<<endl ;
    }

    void deposit(int rs){
        
        amt+=rs ;
        cout<<amt <<endl;
    }


};

int main (){


    int rs;
    cin>>rs ;

    int amt;
    cout<<"Enter the Initial amount : ";
    cin>>amt ;

    Account A1,A2 ;
    A1.deposit(25000) ;
    A2.withdraw(10000) ;

}