
#include<iostream>
using namespace std;
void idea(int amount){
    int a = (amount/10) + amount;
    cout<<a;
     
}
void fr(int &amount){
 amount += amount/10;
 cout<< amount;
}
int main(){
    cout<<"enter amount :";
    int b;
    cin>> b;
    cout<<endl<<"after one year with 10% interest: ";
    idea(b);
    cout<<endl;
    cout<<"current: "<<b<<endl<<"implementing";
    cout<<endl<<"now your amount is: "<<endl;
    fr(b);
    cout<<endl<<b<<endl<<b;
    return 0;
}