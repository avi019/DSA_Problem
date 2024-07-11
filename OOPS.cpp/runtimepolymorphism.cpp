/* 1. unction overriding => When parent and child both contain same function with 
 different implementaion.*/

// 2. it depend upon inheritance 
// yha humm jis class ka object bnayengey usse class ka 
//function call hoga which is known as overriding other one
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
    t2.getinfo();
    Parent p1;
    p1.getinfo();

    return 0;

 }
