#include <iostream>
#include <string>
using namespace std;

// Class definition
class Employee {
private:
    string name;
    double salary;
    string designation;

public:
    // Setter methods
    void setName(const string& empName) {
        name = empName;
    }

    void setSalary(double empSalary) {
        if (empSalary >= 0) {
            salary = empSalary;
        } else {
            cout << "Salary cannot be negative!" << endl;
        }
    }

    void setDesignation(const string& empDesignation) {
        designation = empDesignation;
    }

    // Getter methods
    string getName() const {
        return name;
    }

    double getSalary() const {
        return salary;
    }

    string getDesignation() const {
        return designation;
    }
};

int main() {
    // Create an object of the Employee class
    Employee emp;

    // Set values using setter methods
    emp.setName("John Doe");
    emp.setSalary(75000.50);
    emp.setDesignation("Software Engineer");

    // Access values using getter methods
    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;
    cout << "Designation: " << emp.getDesignation() << endl;

    return 0;
}
