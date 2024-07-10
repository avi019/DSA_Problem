#include<iostream>
using namespace std;
//#include<bits/stdc++.h>
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
    void setsallary(int val)//setter 
    {
        salary=val;
    }
     double getsallary()//getter
    {
        return salary;
        //cout<<" Salary : "<<salary<<endl;
    }

};
class Account
{
private://Data hidding 
       double balance;
       string password;
  
public:
      string accountid;
      string username;
      
   
};




 int main()
 {
    teacher t1;
    t1.name="Avinash";
    t1.subject="C++";
    t1.dept="computer science";
    
    cout<<t1.name<<endl;
    // teacher t2;
    // teacher t3;
    // teacher t4;
    t1.setsallary(50000);
   cout<< t1.getsallary();



    return 0;
 }