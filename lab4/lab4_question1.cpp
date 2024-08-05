#include <iostream>
using namespace std;

class Person {
protected:
    int Age, ID;
    char name[30];
public:
    void inputPersonDetails() {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age and ID: ";
        cin >> Age >> ID;
    }

    void showPersonDetails() {
        cout << "Name: " << name << ", Age: " << Age << ", ID: " << ID << endl;
    }
};

class Employee : public Person {
protected:
    char designation[30];
    int basic_salary, overtime;
    float overtime_rate;
public:
    void inputEmployeeDetails() {
        cout << "Enter your designation: ";
        cin >> designation;
        cout << "Enter basic salary and total overtime (in hours): ";
        cin >> basic_salary >> overtime;
        cout << "Enter hourly overtime rate: ";
        cin >> overtime_rate;
    }

    void showEmployeeDetails() {
        cout << "Designation: " << designation << ", Basic Salary: " << basic_salary
             << ", Overtime: " << overtime << " hours, Overtime Rate: " << overtime_rate << endl;
    }
};

class ComputedSalary : public Employee {
    float total_salary;
public:
    void computeSalary() {
        total_salary = basic_salary + (overtime * overtime_rate);
    }

    void showComputedSalary() {
        computeSalary();
        cout << "Total Salary: " << total_salary << endl;
    }
};

int main() {
    ComputedSalary emp;

    emp.inputPersonDetails();
    emp.inputEmployeeDetails();
    
    cout << endl << "Person Details: " << endl;
    emp.showPersonDetails();
    
    cout << endl << "Employee Details: " << endl;
    emp.showEmployeeDetails();

    cout << endl << "Computed Salary: " << endl;
    emp.showComputedSalary();

    return 0;
}
