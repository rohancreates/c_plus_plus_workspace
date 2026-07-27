#include <iostream>
#include <cmath>
using namespace std;

// Namespace for Simple Calculator
namespace SimpleCalculator
{
    void add(int a, int b)
    {
        cout << "Addition = " << a + b << endl;
    }

    void subtract(int a, int b)
    {
        cout << "Subtraction = " << a - b << endl;
    }
}

// Namespace for Interest Calculator
namespace InterestCalculator
{
    void simpleInterest(float p, float r, float t)
    {
        float si = (p * r * t) / 100;
        cout << "Simple Interest = " << si << endl;
    }

    void compoundInterest(float p, float r, float t)
    {
        float amount = p * pow((1 + r / 100), t);
        float ci = amount - p;
        cout << "Compound Interest = " << ci << endl;
    }
}

int main()
{
    SimpleCalculator::add(20, 10);
    SimpleCalculator::subtract(20, 10);

    cout << endl;

    // Calling two functions from InterestCalculator
    InterestCalculator::simpleInterest(10000, 5, 2);
    InterestCalculator::compoundInterest(10000, 5, 2);

    return 0;
}