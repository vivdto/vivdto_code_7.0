#include<iostream>
using namespace std;

class anmimal{
    public:
    string color;
    void breadth(){
    cout<<"breadth!"<<endl;
}
    void eat(){
        cout<<"eats!"<<endl;
    }

};

    class Fish : public anmimal{
        public:
        int fins; 
        void swim(){
            cout<<"Swims!"<<endl;
        }
    };


int main(){
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.breadth();

    return 0;
}