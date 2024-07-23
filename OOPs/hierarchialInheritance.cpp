#include<iostream>
using namespace std;

class Animal{
    public:
    //string eat;

    void eat(){
        cout<<"Eat!..."<<endl;
    }

   // string breadth;
    
    void breadth(){
        cout<<"breadth!..."<<endl;
    }
};

class Bird : public Animal{
    public:
 //   string fly;
    void fly(){
        cout<<"Fly...";
    }
};


class Fish : public Animal{
    public:
  //  string swim;
    void swim(){
        cout<<"Swim...";
    }
};

class mammel : public Animal{
    public:
  //  string walk;
    void walk(){
        cout<<"Walk..."<<endl;
    }
};


int main(){

 Bird b1; 
 cout<<"Calling from Bird"<<endl;
 b1.breadth();
 b1.eat();
 b1.fly();

 Fish f1; 
 cout<<"Calling from Fish"<<endl;
 f1.breadth();
 f1.eat();
 f1.swim();

    return 0;
}