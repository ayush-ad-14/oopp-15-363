#include<iostream>
using namespace std;
int main(){
    int balance,amount,ch;
    cout<<"Enter opening balance:";
    cin>>balance;
    do{
        cout<<"1...Show Balance"<<endl;
        cout<<"2...Withdraw"<<endl;
        cout<<"3..Deposit"<<endl;
        cout<<"4...Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Balance:"<<balance<<endl;
            break;
            case 2:
            cout<<"Enter amout to withdraw";
            cin>>amount;
            if(amount<=balance){
                cout<<"Amount Withdrawn"<<endl;
            }
            else{
                cout<<"Not sufficient balance"<<endl;
            }
            break;
            case 3:
            cout<<"Amount to deposit"<<endl;
            cin>>amount;
            cout<<"Amount deposited"<<endl;
            cout<<"Total balance:"<<amount+balance<<endl;
            break;
            case 4:
            cout<<"bye...Visit again"<<endl;
            break;
            default:
            cout<<"invalid choice"<<endl;

        }   
    }  
}
