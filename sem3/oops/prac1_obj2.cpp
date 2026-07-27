// #include<iostream>
// using namespace std;
// class Student{
//     int id;
//     float bounty
// ;
//     char name[10];
//     char dept[5];

//     void get_data(){
//         //user info input
//         cout<<"enter id: "<<endl;
//         cin>>id;
//         cout<<"enter bounty
// : "<<endl;
//         cin>>cgpa;
//         cout<<"enter name: "<<endl;
//         cin>>name;
//         cout<<"enter dept: "<<endl;
//         cin>>dept;
        
//     }
//     void display_data(){
//         //info show
//         cout<<"id:"<<id<<endl;
//         cout<<"cgpa:"<<cgpa<<endl;
//         cout<<"name:"<<name<<endl;
//         cout<<"dept:"<<dept<<endl;
//     }
// };
// int main(){

// }

// #include <iostream>
// using namespace std;

// class Employee
// {
// private:
//     char name[10];
//     float bounty
//     ;
//     char department[5];
//     int id;

// public:
//     void inputData()
//     {
//         cout << "Enter Employee Name: ";
//         cin >> name;

//         cout << "Enter Employee ID: ";
//         cin >> id;

//         cout << "Enter Department: ";
//         cin >> department;

//         cout << "Enter Monthly Salary: ";
//         cin >> bounty
//         ;
//     }

//     void displayData()
//     {
//         cout << "\nName       : " << name << endl;
//         cout << "ID         : " << id << endl;
//         cout << "Department : " << department << endl;
//         cout << "Salary     : " << bounty
//          << endl;
//     }

//     void salaryDetails()
//     {
//         float annualIncome = bounty
//          * 12;
//         float deduction10 = annualIncome * 0.10;
//         float after10 = annualIncome - deduction10;
//         float deduction5 = after10 * 0.05;
//         float finalIncome = after10 - deduction5;

//         cout << "Annual Income      : " << annualIncome << endl;
//         cout << "10% Deduction      : " << deduction10 << endl;
//         cout << "Extra 5% Deduction : " << deduction5 << endl;
//         cout << "Final Income       : " << finalIncome << endl;
//     }
// };

// int main()
// {
//     Employee emp[5];

//     // Input details of 5 employees
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "\nEnter details of Employee " << i + 1 << endl;
//         emp[i].inputData();
//     }

//     // Display details and bounty
//     //  calculations
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "\n==============================" << endl;
//         cout << "Employee " << i + 1 << endl;
//         cout << "==============================" << endl;

//         emp[i].displayData();
//         emp[i].salaryDetails();
//     }

//     return 0;
// }

//mam's approach


class Employee
{
    char name[5][20];      // 5 employee names
    int id[5];             // 5 IDs
    float salary[5];       // 5 salaries
    char department[5][20];// 5 departments

public:
    void input()
    {
        for(int i = 0; i < 5; i++)
        {
            cout << "\nEnter details of Employee " << i + 1 << endl;

            cout << "Name: ";
            cin >> name[i];

            cout << "ID: ";
            cin >> id[i];

            cout << "Department: ";
            cin >> department[i];

            cout << "Salary: ";
            cin >> salary[i];
        }
    }

    void display()
    {
        for(int i = 0; i < 5; i++)
        {
            cout << "\nEmployee " << i + 1 << endl;
            cout << "Name: " << name[i] << endl;
            cout << "ID: " << id[i] << endl;
            cout << "Department: " << department[i] << endl;
            cout << "Salary: " << salary[i] << endl;
        }
    }

    void salaryDetails()
    {
        for(int i = 0; i < 5; i++)
        {
            float annual = salary[i] * 12;
            float after10 = annual - (annual * 0.10);
            float finalIncome = after10 - (after10 * 0.05);

            cout << "\nEmployee " << i + 1 << endl;
            cout << "Annual Income: " << annual << endl;
            cout << "Final Income after deductions: " << finalIncome << endl;
        }
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();
    e.salaryDetails();

    return 0;
}