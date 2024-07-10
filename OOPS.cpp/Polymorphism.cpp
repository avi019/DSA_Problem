//compile time Polymorphism
//constructor  overloading
//function overloading 
//operator oveloading 

#include<iostream>
using namespace std;

class teacher {
    private:
          double salary;
    public:
          string name;
          string dept;
          string subject;
   
    //non parameterized
    teacher()//always public
    {
        cout<<"Hi i'm constructor !!! "<<endl;
       
    }
    //parameterized constructor 
     teacher(string n,string d,string s,double sal)//always public
    { 
        dept=d;
        name=n;
        subject=s;
        salary=sal;

    }

    // Use of "this" keyword in constructor
    //it hold the address of the object present in the class
      teacher(string name,string dept,string subject,double salary)//always public
    {
        
        this->dept=dept;
        this->name=name;
        this->subject=subject;
        this->salary=salary;

    }

};

 int main()
 {
    teacher t2("Avinash","computer","DSA",50000); //constructor call automatically

    cout<<t2.name<<endl;
    cout<<t2.dept<<endl;
     cout<<t2.subject<<endl;
    
    return 0;
 }
 //constructor overloading is possible here and this is also called Polymorphism 