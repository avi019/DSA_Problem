#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class teacher {

    //properties,attributes
    private:
          double salary;
    public:
          string name;
          string dept;
          string subject;
   

    //method.memberfunction
    void changedept(string newdept)
    {
        dept=newdept;

    }

};

 int main()
 {
    teacher t1;
    t1.name="Avinash";
    t1.subject="C++";
    t1.dept="computer science";
    t1.salary=50000;
    cout<<t1.salary<<endl;
    // teacher t2;
    // teacher t3;
    // teacher t4;



    return 0;
 }