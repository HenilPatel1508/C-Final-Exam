#include <iostream>
using namespace std;

// Class definition
class Rectangle {
private:
    double length;
    double width;

public:
    // Setter methods
    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            cout << "Length must be positive!" << endl;
        }
    }

    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            cout << "Width must be positive!" << endl;
        }
    }

    // Getter methods
    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }

    // Method to calculate the area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    // Create an object of the Rectangle class
    Rectangle rect;

    // Set the length and width using setter methods
    rect.setLength(10.5);
    rect.setWidth(4.2);

    // Display the values using getter methods
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;

    // Calculate and display the area
    cout << "Area of the Rectangle: " << rect.calculateArea() << endl;

    return 0;
}
