#include<iostream>
using namespace std;
int main(){
    int x = 10 ;
    int &y = x;
    cout<<"x="<<x<<endl;
    y=25;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y;
    return 0;
}