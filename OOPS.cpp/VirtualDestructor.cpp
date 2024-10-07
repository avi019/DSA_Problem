/*1. Virtual Destructors
In C++, a virtual destructor is used in a base class so that the destructor of a derived class can be called 
properly when an object is deleted through a base class pointer. Without a virtual destructor, if a base class 
pointer is used to delete an object of a derived class, only the base class destructor will be invoked, leading 
to resource leaks or improper cleanup.*/

#include<iostream>
using namespace std;

class Base {
public://if we not use virtual keyword then only base class destuctor will be called 
    virtual ~Base() { //similar to fucntion overriding 
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
    Base *ptr = new Derived();
    delete ptr;  // Calls Derived's destructor, then Base's destructor
}
