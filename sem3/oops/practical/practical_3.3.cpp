#include <iostream>
#include <string>
using namespace std;

class Election {
public:
    // 1. Overload 1: For Panchayat/Sarpanch election - age >= 18
    void checkEligibility(int age) {
        cout << "Post: Panchayat Member / Sarpanch" << endl;
        if(age >= 18) 
            cout << "Eligible to vote. Age = " << age << endl;
        else 
            cout << "Not Eligible. Minimum age 18 required." << endl;
        cout << "----------------------" << endl;
    }

    // 2. Overload 2: For MLA election - age + state needed
    void checkEligibility(int age, string state) {
        cout << "Post: MLA" << endl;
        cout << "State: " << state << endl;
        if(age >= 21) 
            cout << "Eligible to vote. Age = " << age << endl;
        else 
            cout << "Not Eligible. Minimum age 21 required." << endl;
        cout << "----------------------" << endl;
    }

    // 3. Overload 3: For MP/President election - age + state + country needed
    void checkEligibility(int age, string state, string country) {
        cout << "Post: MP / President" << endl;
        cout << "State: " << state << ", Country: " << country << endl;
        if(age >= 25) 
            cout << "Eligible to vote. Age = " << age << endl;
        else 
            cout << "Not Eligible. Minimum age 25 required." << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Election e;
    int age;
    string state, country;
    
    cout << "--- Checking Eligibility for different Posts ---" << endl;
    
    // Call 1: Only age
    cout << "Enter age for Panchayat vote: ";
    cin >> age;
    e.checkEligibility(age); 

    // Call 2: age + state
    cout << "Enter age and state for MLA vote: ";
    cin >> age >> state;
    e.checkEligibility(age, state);

    // Call 3: age + state + country
    cout << "Enter age, state and country for MP vote: ";
    cin >> age >> state >> country;
    e.checkEligibility(age, state, country);

    return 0;
}