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
    // deep copy constructor
     Student(Student &orgobj)//pass by reference 
    { 
        cout<<" i am custom deep copy constructor "<<endl;
        this->name=orgobj.name;
        cgpaptr= new double;//new memory is allocated with differrnt address
        *cgpaptr=*orgobj.cgpaptr;//deep copy
    }

   

    //method.memberfunction
    void getinfo()
    {
       cout<<"name : "<<name<<endl;
       cout<<"subject : "<< *cgpaptr<<endl;

    }

    //detsructor
    /*
    1. Normally  destructor call by itself when program is going to end when there 
    is no any need of the variable(properites) which is used 
    2. It automatically delete all the properties ,varialbe
       which is not dynamically created .
    3. for deleting dynamic var,prop we have to make our own destructor .
    4. help to prevent memory leak.
    */
    
    // ~Student()//default destructor
    // {
    //     cout<<"destructor call for un dynamically created variable "<<endl;
       
    // }
    ~Student()
    {
        cout<<"destructor is call for dynamically created variable"<<endl;
        delete cgpaptr;
    }
};

 int main()
 {    
    Student t1("Avinash",8.1);
    t1.getinfo();


    return 0;
 }