#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"enter num: ";
    int num ; 
    cin>> num;
    //reverse krna hai 
    // num = 1234
    int rev_num=0;
    while(num>0){
        int digit = num%10;
        num /=10;
        rev_num = rev_num*10 + digit;

    }
    cout<<rev_num;
    return 0;
}