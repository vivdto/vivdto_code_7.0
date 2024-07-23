#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;
    public:

    Car(){

        cout<<"Constructor is called, object being created..\n";
        
    }
    Car(string name, string color){
        this->name = name;
        this->color = color;

        // *(this).prop
        
        cout<<"Constructor is called, object being created..\n";
    }

    void start(){
        cout<<"Car Started!";
    }

    // void start(){
    //     cout<<"Car Started!";
    // }

    //getter
    string getName(){
        return name;
    }

     string getColor(){
        return color;
    }


};



int main(){
    Car c0; // non paramatrized
    Car c1("Tarzan", "Blue"); // parameter
    cout<<"Car name: "<<c1.getName()<<" "<<c1.getColor()<<endl;


    return 0;
}