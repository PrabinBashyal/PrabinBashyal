#include<iostream>
using namespace std;

class employee {
private:
    char emp_name[30];
    int emp_num;
    float basic_salary, it, da, net_salary, gs; // Declare member variables

public:
    void input() {
        cout << "Enter employee name, employee number, and basic salary: ";
        cin >> emp_name >> emp_num >> basic_salary;
    }

    void show() {
        cout << "Employee Details:" << endl;
        cout << "-----------------------------" << endl;
        cout << "Name: " << emp_name << endl;
        cout << "Emp Number: " << emp_num << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "DA: " << da << endl;
        cout << "IT: " << it << endl;
        cout << "Net Salary: " << net_salary << endl;
        cout << "Gross Salary: " << gs << endl;
        cout << "-----------------------------" << endl;
    }

    void calculate() {
        da = 0.52 * basic_salary;
        gs = basic_salary + da;
        it = 0.3 * gs;
        net_salary = gs - it;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    employee E[100];

    for (int i = 0; i < n; i++) {
        E[i].input();
    }

    for (int i = 0; i < n; i++) {
        E[i].calculate();
        E[i].show();
    }

    return 0;
}
