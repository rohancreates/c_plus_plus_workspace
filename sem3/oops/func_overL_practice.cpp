#include <iostream>
#include <string>
using namespace std;


void notif(string a , string b){
    cout<<"user id and msg"<<endl;
    cout<<a <<b ;
}
void notif(string a , string b , string c ){
    cout<<"This is an ai genrated email to :"<< a <<endl;
    cout<<"subject: "<<b<<endl << c<<endl;
}
void notif(int a , string b){

    cout<<a<<endl<<b;
}

int main(){
string userId = "abc123";
string msg = " user id wala msg";
string emailAddress = "abc@gmail.com";
string subject = "To drink water";
string content = "Mam pls paani pilu?";
int phoneNum = 212173314;
string smallMsg= "ek chota sa msg , peace";

notif(userId , msg);
cout<<endl;
cout<<endl;
notif(emailAddress,subject,content);
cout<<endl;
notif(phoneNum,smallMsg);

return 0 ;



}