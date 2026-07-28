#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if(op == '^')
        return 3;
    if(op == '*' || op == '/')
        return 2;
    if(op == '+' || op == '-')
        return 1;
    return -1;
}

// This function is EXACTLY SAME as before.
// No changes needed because we will still convert to POSTFIX internally.
string fun(string infix) {

    string postfix = "";
    stack<char> st;

    for(char ch : infix) {

        if(isalnum(ch)) {
            postfix += ch;
        }

        else if(ch == '(') {
            st.push(ch);
        }

        else if(ch == ')') {

            while(!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }

            if(!st.empty())
                st.pop();
        }

        else {

            while(!st.empty() &&
                 (precedence(st.top()) > precedence(ch) ||
                 (precedence(st.top()) == precedence(ch) && ch != '^'))) {

                postfix += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    while(!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {

    string infix;
    cin >> infix;

    // ===================== CHANGE 1 =====================
    // OLD:
    // cout << fun(infix);

    // NEW:
    // Reverse the infix expression.

    reverse(infix.begin(), infix.end());

    // WHY?
    // Prefix can be obtained by:
    // Reverse Infix -> Postfix -> Reverse Answer

    // ====================================================


    // ===================== CHANGE 2 =====================
    // Swap '(' with ')'

    for(char &ch : infix) {

        if(ch == '(')
            ch = ')';

        else if(ch == ')')
            ch = '(';
    }

    // WHY?
    // After reversing, every opening bracket becomes a closing
    // bracket and vice versa.
    // Example:
    // (A+B)
    // Reverse -> )B+A(
    // Correct form -> (B+A)

    // ====================================================


    // ===================== CHANGE 3 =====================
    // Convert modified infix to postfix

    string postfix = fun(infix);

    // WHY?
    // We already have a working infix->postfix algorithm.
    // Reuse it instead of writing a new one.

    // ====================================================


    // ===================== CHANGE 4 =====================
    // Reverse postfix to obtain prefix.

    reverse(postfix.begin(), postfix.end());

    // WHY?
    // Reverse(Postfix of Reversed Infix) = Prefix

    // ====================================================


    cout << postfix;

    return 0;
}