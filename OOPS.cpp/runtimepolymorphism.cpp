//Function overriding
#include<iostream>
using namespace std;

class Parent {
    
    public:
       void  getinfo()
        {
            cout<<"parent class"<<endl;
        }
};
class child :public Parent{
    public:
     void getinfo()
    {
            cout<<"child class"<<endl;
    }

};

 int main()
 {
    child t2; //constructor call automatically

    return 0;

 }
 //constructor overloading is possible here and this is also called Polymorphism 