#include<iostream>
using namespace std;

class student {//parent
    public:
          string name;
          int rollno;

};
class teacher {//parent
    public:
          string sub;
          double salary;

};
class TA : public student,public teacher {//child
public:
    void getinfo()
    {
        cout<<"name : "<<name<<endl;
        cout<<"rollno : "<<rollno<<endl;
        cout<<"salary : "<<salary<<endl;
        cout<<"subject : "<<sub<<endl;
    }
};

 int main()
 {
    TA obj;
    obj.name="Avinash";
    obj.rollno=52;
    obj.salary=50000;
    obj.sub="MATHS";
     obj.getinfo();
    return 0;
 }