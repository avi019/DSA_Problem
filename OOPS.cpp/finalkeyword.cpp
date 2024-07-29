#include<iostream>
using namespace std;
//sometimes we don't need to override the virtual function in runtime polymorphism 
// then there we are using "final" keywrod just after the virtual function so that it can't be override in derived class.
  //After using "final" keyword class becom non inheritable
//final function -> function can not be override 
//final variable -> can not be changed 
class base
{
    public:
    int x;
    string name;
    
    base() 
    {
        this->x=100;
        this->name="PATHAK";
    }
    void fun()
    {
        cout<<"parent class "<<endl;
    }



};
class child : public base
{
    public:
    int y;
    string s;
     child(int x,string s)
    {
        this->y=x;
        this->s=s;
    }
     void fun()
    {
        cout<<"parent class "<<endl;
    }




};
int main()
{
    child obj(10,"AVINASH");
    cout<<obj.y<<" "<<obj.s<<endl;

    cout<<obj.x<<endl;
    cout<<obj.name<<endl;
   

   // cout<<obj1.x<<" "<<obj1.name<<endl;

    return 0;

}