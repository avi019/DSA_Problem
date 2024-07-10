#include<iostream>
using namespace std;

class teacher {

    //properties,attributes
    private:
          double salary;
    public:
          string name;
          string dept;
          string subject;
          //parameterized constructor
    teacher(string name,string dept,string subject,double salary)//always public
    {
        cout<<" parametrized constructor is called "<<endl;
        
        this->dept=dept;
        this->name=name;
        this->subject=subject;
        this->salary=salary;

    }
    // copy constructor
     teacher(teacher &orgobj)//pass by reference 
    {
        cout<<" i am custom copy constructor "<<endl;
        this->name=orgobj.name;
        this->dept=orgobj.dept;
        this->salary=orgobj.salary;
        this->subject=orgobj.subject;

    }

   

    //method.memberfunction
    void getinfo()
    {
       cout<<"name : "<<name<<endl;
       cout<<"subject : "<< subject<<endl;

    }

};

 int main()
 {
    teacher t1("Avinash","computer","DSA",50000);
   // t1.getinfo();
   // teacher t2(t1);//default copy constructor

    teacher t2(t1);
    t2.getinfo();


    return 0;
 }