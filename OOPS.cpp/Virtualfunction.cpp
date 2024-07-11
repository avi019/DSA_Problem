// 2nd example of runtime polymorphism is virtual function 
//Virtual function => is a member function that you expect to be redefined in derived classes.
#include<iostream>
using namespace std;

class Parent {
    
    public:
       void  getinfo()
        {
            cout<<"parent class"<<endl;
        }
        //it is called during runtime 
        virtual void hello()//can be editable in subclass
        {
            cout<<"im from parent class "<<endl;
        }
};
class child :public Parent{
    public:
     void getinfo()
    {
            cout<<"child class"<<endl;
    }
         void hello()
        {
            cout<<"im from child class "<<endl;
        }

};

 int main()
 {
    child t2; //constructor call automatically
    t2.getinfo();
    Parent p1;
    p1.getinfo();
    p1.hello();
    t2.hello();

    return 0;

 }
