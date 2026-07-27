//right a program to creat 2 functions calculate 1 and 2 
// calc 1 :
// take 3 inputs, and check whether it is even positive number or not 
//calc 2:
//pass 2 value as parameter and find the some of 2 smallest number, 
// #include<iostream>
// using namespace std;
// void calc1(int a , int b , int c){
//     if(a>0 && a%2==0){
//         cout<<"a is even pos";
//     }
//     if(b>0 && b%2==0){
//         cout<<"b is even pos";
//     }
//     if(c>0 && c%2==0){
//         cout<<"c is even pos";
//     }
    
// }
// void calc2(int a, int b , int c){

// }
#include <iostream>
using namespace std;


void calculate1()
{
    int a, b, c;



    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    if (a > 0 && a % 2 == 0)
        cout << a << " is a positive even number." << endl;
    else
         cout << a << " is NOT a positive even number." << endl;
    if (b > 0 && b % 2 == 0)



        cout << b << " is a positive even number." << endl;




+++++++++++++++++++++++++++++++++++++++++++++++++++++
    else
        cout << b << " is NOT a positive even number." << endl;
    if (c > 0 && c % 2 == 0)

        cout << c << " is a positive even number." << endl;

        
    else
        cout << c << " is NOT a positive even number." << endl;
}
void calculate2(int x, int y)
{
    cout << "Sum of the two numbers = " << x + y << endl;
}

int main()
{
    calculate1();

    int num1, num2;


    cout << "\nEnter 2 numbers: ";
    cin >> num1 >> num2;

    calculate2(num1, num2);




    return 0;
}