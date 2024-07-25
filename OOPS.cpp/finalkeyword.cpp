#include<iostream>
using namespace std;
//sometimes we don't need to override the virtual function in runtime polymorphism 
// then there we are using "final" keywrod just after the virtual function so that it can't be override in derived class.
class base final //After using "final" keyword class becom non inheritable
{
    public:
    int x;
    string name;
    
    base()
    {
        this->x=100;
        this->name="PATHAK";
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