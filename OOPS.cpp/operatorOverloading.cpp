#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
//    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}
     Complex(float r = 0.0, float i = 0.0)//real(r), imag(i) 
     {
        this->real=r;
        this->imag=i;
     }

    // Function to display complex numbers
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overloading the '+' operator to add two Complex numbers
    Complex operator + (const Complex &obj) {
        Complex result;
        result.real = this->real + obj.real;
        result.imag = this->imag + obj.imag;
        return result;
    }
};

int main() {
    Complex c1(3.0, 4.0); // c1 = 3.0 + 4.0i
    Complex c2(1.5, 2.5); // c2 = 1.5 + 2.5i

    // Adding two Complex numbers using overloaded '+'
    Complex c3 = c1 + c2;

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c1 + c2 = "; c3.display();

    return 0;
}
