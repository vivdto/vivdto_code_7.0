#include<iostream>
#include<string.h>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color){
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 12;
    }

    Car(Car &original){
        cout<<"Copying Original to new..";
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }

    ~Car(){
        cout<<"Deleting Object..."<<endl;
        if(mileage !=NULL){
            delete mileage;
            mileage = NULL;
        }
    }

};

int main(){
    Car c1("Maruti 800", "White");
   // Car c2(c1);
    
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
    return 0;
}