/*
Function overriding;

Parent & Child both contain the same function with diffrent implementation. 

The Parent class function is said to be Overridden.

*/


#include<iostream>
using namespace std;


class Parent{
    void show(){
        cout<<"Parent class show is called..."<<endl;
    }
};

class child : public Parent{
    public:
    void show(){
        cout<<"Child class show is called..."<<endl;
    }
};

int main(){
    child child1;
    child1.show();

    return 0;
}