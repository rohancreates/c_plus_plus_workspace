#include<iostream>
using namespace std;
class Student{
    int id;
    float cgpa;
    char name[10];
    char dept[5];

    void get_data(){
        //user info input
        cout<<"enter id: "<<endl;
        cin>>id;
        cout<<"enter cgpa: "<<endl;
        cin>>cgpa;
        cout<<"enter name: "<<endl;
        cin>>name;
        cout<<"enter dept: "<<endl;
        cin>>dept;
        
    }
    void display_data(){
        //info show
        cout<<"id:"<<id<<endl;
        cout<<"cgpa:"<<cgpa<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"dept:"<<dept<<endl;
    }
};
int main(){

}

