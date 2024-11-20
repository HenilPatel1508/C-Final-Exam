#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Base class Shape
class Shape {
private:
    string color;

protected:
    double area;

public:
    // Setter for color
    void setColor(const string& c) {
        color = c;
    }

    // Getter for color
    string getColor() const {
        return color;
    }

    // Pure virtual function to calculate area
    virtual void calculateArea() = 0;

    // Pure virtual function to display shape details
    virtual void display() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r, const string& c) : radius(r) {
        setColor(c);
        calculateArea();
    }

    // Override calculateArea
    void calculateArea() override {
        area = M_PI * radius * radius;
    }

    // Override display
    void display() const override {
        cout << "Shape: Circle\n"
             << "Color: " << getColor() << "\n"
             << "Radius: " << radius << "\n"
             << "Area: " << area << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    // Constructor
    Rectangle(double l, double w, const string& c) : length(l), width(w) {
        setColor(c);
        calculateArea();
    }

    // Override calculateArea
    void calculateArea() override {
        area = length * width;
    }

    // Override display
    void display() const override {
        cout << "Shape: Rectangle\n"
             << "Color: " << getColor() << "\n"
             << "Length: " << length << "\n"
             << "Width: " << width << "\n"
             << "Area: " << area << endl;
    }
};

int main() {
    // Create an array of Shape pointers
    vector<Shape*> shapes;

    // Add Circle and Rectangle objects to the array
    shapes.push_back(new Circle(5.0, "Red"));
    shapes.push_back(new Rectangle(4.0, 6.0, "Blue"));

    // Demonstrate polymorphism by calling display() on each object
    for (Shape* shape : shapes) {
        shape->display();
        cout << endl;
    }

    // Clean up dynamically allocated memory
    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
