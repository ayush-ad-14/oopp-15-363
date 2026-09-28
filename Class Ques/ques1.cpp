//write a program to scan a student name rollno section branch and marks of 5 subjects .
//Show the details including total marks and percentage. 
//Apply modular programming techniques.
#include<iostream>
using namespace std;
    void input(string &name,string &branch,string &section,int &roll, int marks[]){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter Branch:";
        cin>>branch;
        cout<<"Enter section:";
        cin>>section;
        cout<<"Enter Roll no:";
        cin>>roll;
        for(int i=0;i<5;i++){
        cout<<"Enter marks of:"<<i+1<<":";
        cin>>marks[i];
        }

    }
    void show(string name,string branch,string section,int roll, int marks[],int total,int percent){


    }
    void cal(int marks[],int &total,float &percent){
        for(int i=0;i<5;i++){
            total+=marks[i];
        }
    
    }
    int main(){
        string name,section,branch;
        int roll,marks[5],total=0;
        float percent;
        input(name,section,branch,roll,marks);
        cal(marks,total,percent);
        show(name,branch,section,roll,marks,total,percent);


    }