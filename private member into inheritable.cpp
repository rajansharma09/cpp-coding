#include <iostream>
using namespace std;

class Base {
protected:
    int protectedMember;

public:
    Base() : protectedMember(10) {}
};

class Derived : public Base {
public:
    void display() {
        cout << "Protected Member: " << protectedMember << endl;

    }
};

int main() {
    Derived obj;
    obj.display();
    return 0;
}

