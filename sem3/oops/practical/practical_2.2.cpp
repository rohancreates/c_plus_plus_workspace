#include <iostream>
using namespace std;

class Area
{
public:
   
    void area(int side)   {
        cout << "Area of Square = " << side * side << endl;
    }

    void area(int length, int breadth){
        cout << "Area of Rectangle = " << length * breadth << endl;
    }

    void area(float radius){
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
    void area(float base, float height){
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }
};

int main()
{
    Area obj;
    int choice;
    char ch;

    do
    {
        cout << "\nArea Caalcolator\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Circle\n";
        cout << "4. Triangle\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:{
            int side;
            cout << "Enter side: ";
            cin >> side;
            obj.area(side);
            break;
        }

        case 2:
        {
            int length, breadth;
            cout << "Enter length and breadth: ";
            cin >> length >> breadth;
            obj.area(length, breadth);
            break;
        }

        case 3:
        {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;
            obj.area(radius);
            break;
        }

        case 4:
        {
            float base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;
            obj.area(base, height);
            break;
        }

        default:
            cout << "Invalid Choice!" << endl;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    cout << "Program Ended.";
    return 0;
}