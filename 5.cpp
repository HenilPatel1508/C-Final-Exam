#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    // Constructor
    Employee(const string& empName, double empSalary)
        : name(empName), salary(empSalary) {}

    // Getter for name
    string getName() const {
        return name;
    }

    // Getter for salary
    double getSalary() const {
        return salary;
    }

    // Overload '+' operator to add salaries of two employees
    double operator+(const Employee& other) const {
        return this->salary + other.salary;
    }

    // Display function
    void display() const {
        cout << "Name: " << name << ", Salary: $" << salary << endl;
    }
};

int main() {
    // Create two Employee objects
    Employee emp1("Alice", 50000);
    Employee emp2("Bob", 60000);

    // Display individual employee details
    cout << "Employee Details:" << endl;
    emp1.display();
    emp2.display();

    // Use overloaded '+' operator to calculate the total salary
    double totalSalary = emp1 + emp2;

    // Display the total salary
    cout << "\nTotal Salary of " << emp1.getName() << " and " << emp2.getName()
         << ": $" << totalSalary << endl;

    return 0;
}
