#include <iostream>
using namespace std;

class Expression
{
public:
    // Function to calculate a + b² + 2c using integer values
    int calculate(int a, int b, int c)
    {
        return a + (b * b) + (2 * c);
    }

    // Overloaded function to calculate a + b² + 2c using float values
    float calculate(float a, float b, float c)
    {
        return a + (b * b) + (2 * c);
    }
};

int main()
{
    Expression obj;

    int a1, b1, c1;
    cout << "Enter integer values of a, b and c: ";
    cin >> a1 >> b1 >> c1;
    cout << "Result (Integer): " << obj.calculate(a1, b1, c1) << endl;

    float a2, b2, c2;
    cout << "\nEnter float values of a, b and c: ";
    cin >> a2 >> b2 >> c2;
    cout << "Result (Float): " << obj.calculate(a2, b2, c2) << endl;

    return 0;
}