#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {  // Virtual function for overriding
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {  // Overriding function
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* myAnimal = new Animal();
    myAnimal->makeSound();

    Animal* myDog = new Dog();
    myDog->makeSound(); // Calls overridden method
}


