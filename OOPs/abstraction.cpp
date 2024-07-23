/*Abstract classes are used to provide a base class from which other classes can be derived.

• They cannot be instantiated (dont create object) and are meant to be inherited.

• Abstract classes are typically used to define an interface (blueprint) for derived classes.*/

/*

Hiding all unnecessary details & showing only the important pats! 
access specifiers!

** and showing only the important parts!


--> Abstract Classes(Koi Object Nhi hoga! inheritence m helpfull hota h! Child Class ka blueprint degi or atleast ek pure virtual function hogi! ) and Pure Virtual Function!



Shape{ // Proper defination nhi hoti
    draw()

***Pure Virtual Function Vo Hoti Hhh --- Jin function ka pure defination nhi hota h unhe hi humm pure virtual function bolte h!


}




*/


#include<iostream>
using namespace std;


class Shape{
    public:
    virtual void draw() = 0; // abstract fnx, pure virtual fnx
};

class circle : public Shape {
    public:
    void draw(){
        cout<<" Draw Circle \n";
    }
};

class square : public Shape {
    public:
    void draw(){
        cout<<" Draw square \n";
    }
};


int main(){


    circle cir1;
    cir1.draw();

    square squ1;
    squ1.draw();

    // Shape shape1;
    // shape1.draw();


    return 0;
}