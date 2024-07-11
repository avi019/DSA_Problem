//Hidding all unnecessary details and showing only  the important parts
#include<iostream>
using namespace std;

class shape {//abstract class 
    virtual void draw()=0; //pure virtual dunction
    // working of abstract is to givig idea ,bluprint to subclass 
 
};
class circle :public shape{
    public:
    void draw()
    {
        cout<<"drawing circle"<<endl;
    }

   
};

 int main()
 {
    circle c1;
    c1.draw();
   
    return 0;

 }
