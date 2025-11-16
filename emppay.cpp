#include <iostream>
using namespace std;
class SalarySlip {
private:
    int empID;
    char name[50];
    float basic, hra, da, pf, gross, net;
public:
    void getdata() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }
    void calculate() {
        hra = basic * 0.20;
        da = basic * 0.10;
        pf = basic * 0.08;
        gross = basic + hra + da;
        net = gross - pf;
    }
    void display() {
        cout << "\n----- Salary Slip -----\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "PF: " << pf << endl;
        cout << "Gross Salary: " << gross << endl;
        cout << "Net Salary: " << net << endl;
    }
};
int main() {
    SalarySlip s;
    s.getdata();
    s.calculate();
    s.display();
    return 0;
}
