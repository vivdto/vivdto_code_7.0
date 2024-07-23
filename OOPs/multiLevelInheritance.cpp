#include<iostream>
using namespace std;

class animal{
    public:
    string color;
   
    void breadth(){
    cout<<"breadth!"<<endl;
}
    void eat(){
        cout<<"eats!"<<endl;
    }

};

class Mammal : public animal{
public: 
    string bloodGroup;
    Mammal(){
    bloodGroup = "Warm";
    }

};


class Dog : public Mammal
{
    public:
    void tailheight(){
        cout<<"here is my tail...";
    }
};

    class Fish : public animal{
        public:
        int fins; 
        void swim(){
            cout<<"Swims!"<<endl;
        }
    };

//Protected ko Main m call nhi kr sakte but class m kr sakte h
int main(){
    Dog d1;
    d1.breadth();
    cout<<endl;
    d1.eat();
    cout<<endl;
    d1.tailheight();
    cout<<endl;
    cout<<d1.bloodGroup<<endl;

    return 0;
}