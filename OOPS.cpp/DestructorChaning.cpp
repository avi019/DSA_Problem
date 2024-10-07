/*2. Destructor Chaining
Destructor chaining refers to the order in which destructors are called when an object is destroyed 
in a class hierarchy. When an object is destroyed, destructors are called in the reverse order of 
inheritance (from the most derived class to the base class). This ensures that any resources specific 
to the derived class are cleaned up first before the base class cleanup.*/

#include<iostream>
using namespace std;
class Base {
public:
    ~Base() { 
        cout << "Base Destructor\n"; 
    }
};

class Derived : public Base {
public:
    ~Derived() { 
        cout << "Derived Destructor\n"; 
    }
};

int main() {
    Derived d;
    // Calls Derived's destructor, then Base's destructor
}
