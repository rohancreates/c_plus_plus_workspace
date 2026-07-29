#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

double applyOp(double a, double b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a, b);
    }
    return 0;
}

double evaluatePostfix(string exp) {
    stack<double> st;
    stringstream ss(exp);
    string token;

    while(ss >> token) { // tokens separated by space: "2 3 1 * +"
        char c = token[0];

        // If operand: number
        if(isdigit(c)) {
            st.push(stod(token)); // stod for double, stoi for int
        }
        // If operator
        else if(isOperator(c)) {
            double b = st.top(); st.pop();
            double a = st.top(); st.pop();
            double result = applyOp(a, b, c);
            st.push(result);
        }
    }
    return st.top();
}

int main() {
    string postfix;

    cout << "Enter postfix expression with space between tokens" << endl;
    cout << "Example: 2 3 1 * + 9 -" << endl;
    cout << "Expression: ";
    getline(cin, postfix);

    double ans = evaluatePostfix(postfix);
    cout << "Result = " << ans << endl;

    return 0;
}