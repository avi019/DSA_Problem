#include<iostream>
using namespace std;

class Student {
    public:
          string name;
          double* cgpaptr;
         
          //parameterized constructor
    Student(string name,double cgpa)//always public
    {
        cout<<" parametrized constructor is called "<<endl;

        this->name=name;
        cgpaptr = new double;
        *cgpaptr=cgpa;

    }
    // shallow copy constructor
     Student(Student &orgobj)//pass by reference 
    {
        cout<<" i am custom shallow copy constructor "<<endl;
        this->name=orgobj.name;
        this->cgpaptr=orgobj.cgpaptr;//shallow copy
    }

   

    //method.memberfunction
    void getinfo()
    {
       cout<<"name : "<<name<<endl;
       cout<<"subject : "<< *cgpaptr<<endl;

    }

};

 int main()
 {    
    Student t1("Avinash",8.1);
    Student t2(t1);
    *(t2.cgpaptr)=9.2;
    t2.getinfo();
    cout<<"printing t1"<<endl;
    t1.getinfo();


    return 0;
 }