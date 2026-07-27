#include <iostream>
using namespace std;

struct Node {
    int info;
    Node* next;
};

Node* top = NULL;

// Push
void push(int x) {
    Node* temp = new Node;
    temp->info = x;
    temp->next = top;
    top = temp;
}

// Check Underflow
bool isUnderflow() {
    if (top == NULL) {
        cout << "Stack is Empty!" << endl;
        return true;
    }
    return false;
}

// Pop
void pop() {
    if (isUnderflow())
        return;

    Node* temp = top;
    top = top->next;
    cout << "Deleted: " << temp->info << endl;
    delete temp;
}

// Peek
void peek() {
    if (isUnderflow())
        return;

    cout << "Top Element: " << top->info << endl;
}

// Traverse
void traverse() {
    if (isUnderflow())
        return;

    Node* temp = top;

    cout << "Stack Elements: ";
    while (temp != NULL) {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int ch, value;

    do {
        cout << "\n----- STACK MENU -----\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Traverse\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter Element: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                traverse();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (ch != 5);

    return 0;
}