#include <iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape {
private:
    string color;
    double area;

protected:
    void setArea(double a) {
        area = a;
    }

public:
    // Setter for color
    void setColor(const string& c) {
        color = c;
    }

    // Getter for color
    string getColor() const {
        return color;
    }

    // Getter for area
    double getArea() const {
        return area;
    }

    // Virtual method to calculate area (abstract method)
    virtual void calculateArea() = 0; // Pure virtual function
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to set radius
    Circle(double r) : radius(r) {}

    // Method to calculate area for Circle
    void calculateArea() override {
        double a = M_PI * radius * radius;
        setArea(a); // Use protected setter from base class
    }

    // Getter for radius
    double getRadius() const {
        return radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    // Constructor to set length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Method to calculate area for Rectangle
    void calculateArea() override {
        double a = length * width;
        setArea(a); // Use protected setter from base class
    }

    // Getters for length and width
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }
};

int main() {
    // Create a Circle object
    Circle circle(5.0); // Radius = 5.0
    circle.setColor("Red");
    circle.calculateArea();

    cout << "Circle:" << endl;
    cout << "Color: " << circle.getColor() << endl;
    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.getArea() << endl;

    // Create a Rectangle object
    Rectangle rectangle(4.0, 6.0); // Length = 4.0, Width = 6.0
    rectangle.setColor("Blue");
    rectangle.calculateArea();

    cout << "\nRectangle:" << endl;
    cout << "Color: " << rectangle.getColor() << endl;
    cout << "Length: " << rectangle.getLength() << endl;
    cout << "Width: " << rectangle.getWidth() << endl;
    cout << "Area: " << rectangle.getArea() << endl;

    return 0;
}
