#include<iostream>
using namespace std;
//sometimes we don't need to override the virtual function in runtime polymorphism 
// then there we are using "final" keywrod just after the virtual function so that it can't be override in derived class.
class base final //After using "final" keyword class becom non inheritable
{
    public:
    int* age;
    string name;
    
    base(int val,string name)
    {
        age =new int;
        *age=val;
        this->name=name;
    }
    base(base &newobj)
    {
        cout<<"manual copy constructor is called "<<endl;
        age=new int;
        *age=*newobj.age;
        this->name=newobj.name;
    }



};

int main()
{
    base obj(10,"AVINASH");
    base obj2(obj);
    
cout<<"object 1 "<<endl;
   cout<<*obj.age<<" "<<obj.name<<endl;
   cout<<"object 2 "<<endl;
   cout<<*obj2.age<<" "<<obj2.name<<endl;
   *obj2.age=18;
   cout<<"after changing the age of object 2"<<endl;
   cout<<"object 1 -> "<<*obj.age<<" "<<obj.name<<endl;
   cout<<"object 2 -> "<<*obj2.age<<" "<<obj2.name<<endl;




    return 0;

}