#include<iostream>
using namespace std;
#include<string>
void func()
{
    static int x=0; //it run only once , only one time instantiated .
    // value of x will not be destroy 
    cout<<" x: "<<x<<endl;
    x++;

}
class A{
    public:
    int x;
    void inc()
    {
        x=x+1;
    }

};
class B{
    public:
    B()
    {
        cout<<"constructor "<<endl;
    }
    ~B()
    {
        cout<<"destructor "<<endl;
    }

};

int main()
{
    //without static keyword fist object is created ,and then destructor is called at the end  and then progeam is end .
    if(true)
   static B obj1; //when program is end then only object get destroy .

    cout<<"end of main function "<<endl;

    // A obj1;
    // A obj2;
    // obj2.x=20;
    // obj1.x=10;
    // cout<<obj1.x<<endl;
    // obj1.inc();
    // cout<<obj2.x<<endl;



    // func();
    // func();
    // func();

    return 0;
}
