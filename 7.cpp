#include <iostream>
#include <vector>
using namespace std;

// Abstract base class
class Animal {
public:
    // Pure virtual functions
    virtual void sound() const = 0;
    virtual void move() const = 0;

    // Virtual destructor
    virtual ~Animal() {}
};

// Derived class Dog
class Dog : public Animal {
public:
    void sound() const override {
        cout << "Dog: Woof! Woof!" << endl;
    }

    void move() const override {
        cout << "Dog: Runs on four legs." << endl;
    }
};

// Derived class Bird
class Bird : public Animal {
public:
    void sound() const override {
        cout << "Bird: Chirp! Chirp!" << endl;
    }

    void move() const override {
        cout << "Bird: Flies in the sky." << endl;
    }
};

int main() {
    // Create an array (vector) of Animal pointers
    vector<Animal*> animals;

    // Add Dog and Bird objects to the array
    animals.push_back(new Dog());
    animals.push_back(new Bird());

    // Demonstrate polymorphism
    for (Animal* animal : animals) {
        animal->sound();
        animal->move();
        cout << endl;
    }

    // Clean up memory
    for (Animal* animal : animals) {
        delete animal;
    }

    return 0;
}
