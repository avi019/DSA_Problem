#include<iostream>
using namespace std;

class Person {//parent
    public:
          string name;
          int age;

};
class student :public Person {//parent
    public:
          int roll;
          double salary;
     void getinfo()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"rollno : "<<roll<<endl;
         cout<<"salary : "<<salary<<endl;



      
    }

};
class teacher : public Person{//child
public:
string subject;
    void getinfo()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"sub : "<<subject<<endl;

      
    }
};

 int main()
 {
    student obj;
    obj.name="Avinash";
    obj.roll=52;
    obj.salary=50000;
    obj.age=22;
   
     obj.getinfo();
     teacher obj1;
     obj1.name="Golu";
     obj1.age=22;
     obj1.subject="Computer networks";
     obj1.getinfo();

    return 0;
 }