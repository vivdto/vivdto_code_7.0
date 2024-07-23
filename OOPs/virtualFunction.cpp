//Virtual Function is a member function that you expect to be redefined in derived classes!


#include<iostream>
using namespace std;

class Parent {
    public:
    virtual void hello (){
        cout<<"Parent 'Hello'!!";
    }
};



class Child : public Parent {
    public:
    void hello (){
        cout<<"Child 'Hello'!!";
    }
};


int main(){
    Child child1;
    Parent *ptr;

    ptr = &child1; // Run time binding.

    ptr->hello();
    return 0;
}


/*

Virtual Functions ae Dynamic in Nature.
Defined by the keyword "Virtual" inside a base class and ae always declaed with a base class and overridden in a child class.

A vitual function is called during runtime.


*/