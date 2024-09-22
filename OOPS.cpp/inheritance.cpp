/*Inheritance:
          1. The capability of a class to derive properties and characteristics from another class is called Inheritance.
          2. Inheritance is a feature or a process in which,
             new classes are created from the existing classes. 
             The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. 
             The derived class now is said to be inherited from the base class.*/

// used for code reuseability .
// When properties & member functions of base class are passed on to the derived class
#include<iostream>
using namespace std;
class Person { //parent class

    public:
          string name;
          int age;
    Person()
    {
        cout<<" first "<<endl;

    }
    ~Person()
    {
        cout<<"parent"<<endl;
    }
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;

    }
};
//child class
class student : public Person {   //inherit
    public:
    int rollno;
    student() //constructor
    {
        cout<<" second "<<endl;
    }
    ~student()//destructor
    {
        cout<<"child"<<endl;
    }
     student(string name ,int age,int rollno) : Person( name, age) //Parameterized constructor
    {
        this->rollno=rollno;
    }
     void getinfo()
    {
        cout<<"name : "<<name<<endl;
        cout<<"rollno : "<<rollno<<endl;
        cout<<"age : "<<age<<endl;

    }

};


 int main()
 {
    student s1("Avinash",22,52);
    // s1.name="Avinash";
    // s1.age=22;
    // s1.rollno=52;
    s1.getinfo();

    return 0;
 }
