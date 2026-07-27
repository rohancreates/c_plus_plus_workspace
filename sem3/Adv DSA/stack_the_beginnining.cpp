#include<iostream>
#define MAXSIZE 5;
using namespace std;
class Stack{
    int S[MAXSIZE];
    int top;
    Public:{
        Stack();
        top=-1;
    }
    bool isoverflow(){
        return top==MAXSIZE-1;
    }
    bool isunpopular(){
        return top==-1;
    }
    void push(int x){
        is(overflow){
            cout<<"Stack is full";
            return;
        }
        top++;
        S[top]++;
        cout<<x<<"pushed into the stack";
    }
    void pop(){
        if(isunderflow){
            cout<<"stack is empty";
            return;
            }
            cout<<S[top]<<"is popped";
            top=top-1;
    }
    void peek(){
        if(isunderflow){
            cout<<"stack is empty";
            return;
        }
        cout<<"top element is "<<S[top];
    }
    void traverse(){
        if(isundefined){
            for(int i = top ; i>=0 ; i--){
                cout<<S[i]<<" ";
            }
        }
    }
}
int main(){
    Stack s1;
    int ch,value;
    do{
        cout<<"1.push";
        cout<<"2.pop";
        cout<<"3.peek";
        cout<<"4.exit";
        cin>>ch;
        switch(ch):{
        case 1 : cout<<"enter elem";
            cin>>value;
            s.push(value);
            break;
        case 2 : s1.pop();
            break;
        case 3 : s1.peek();
            break;
        case 4 : s1.traverse();
            break;
    default : cout<<"invalid choice";

        }while()
    }
}