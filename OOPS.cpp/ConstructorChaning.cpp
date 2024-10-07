/*3. Constructor Chaining
Constructor chaining occurs when constructors of derived classes invoke the constructors of their 
base classes. In C++, this happens automatically when an object of a derived class is created. 
The base class constructor is called first, followed by the derived class constructor.
Constructors are called in the order of inheritance, starting from the base class to the most derived 
class. This ensures that the base class part of the object is properly initialized before the derived 
class adds its own initialization.*/

#include<iostream>
using namespace std;
class Base {
public:
    Base() { 
        cout << "Base Constructor\n"; 
    }
};

class Derived : public Base {
public:
    Derived() { 
        cout << "Derived Constructor\n"; 
    }
};

int main() {
    Derived d;
    // Calls Base's constructor, then Derived's constructor
}
