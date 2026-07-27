#include<iostream>
using namespace std;
Struct Node{
    int info;
    Node* next;
}
Node* top = NULL;
Void push(int x){
    Node* temp = new Node;
    temp-> info = x;
    temp->next= top;
    top=temp;
}
bool isunderflow(){
    if(top==NULL){
        cout<<"stack is empty"<<endl;
        return ;
    }
}
Void pop(){
    if(isunderflow){}
    else{
        Node* temp = top;
        top=top->next;
        delete temp;
    }
}
Void peek(){
    if(isunderflow){}
        else{
            cout<<top->info;
        }
}
Void traverse(){
    if(isunderflow){}
        else{
            Node* temp = top;
            while(temp!=NULL){
                cout<<temp->info<<" ";
                temp=temp->next;
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

        }while(){}
    }
}