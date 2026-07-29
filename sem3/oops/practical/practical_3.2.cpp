//write a program  too demonstrate the concept of default arguements for calculating the average of 5 subject marks in which twoo are compulsory to be defined by the user
#include <iostream>
using namespace std;

// avg function with default arguments
// s1, s2 are compulsory. s3, s4, s5 default to 0
double calculateAverage(double s1, double s2, double s3 = 0, double s4 = 0, double s5 = 0) {
    double sum = s1 + s2 + s3 + s4 + s5;
    double avg = sum / 5.0; // average of 5 subjects
    return avg;
}

int main() {
    double m1, m2, m3, m4, m5;
    
    cout << "Enter marks of 2 compulsory subjects: ";
    cin >> m1 >> m2;
    
    cout << "Do you want to enter marks of 3 more subjects? (y/n): ";
    char ch;
    cin >> ch;
    
    double avg;
    if(ch == 'y' || ch == 'Y') {
        cout << "Enter marks of remaining 3 subjects: ";
        cin >> m3 >> m4 >> m5;
        avg = calculateAverage(m1, m2, m3, m4, m5); // all 5 passed
    }
    else {
        avg = calculateAverage(m1, m2); // only 2 passed, rest = 0 by default
    }
    
    cout << "Average of 5 subjects = " << avg << endl;
    
    return 0;
}