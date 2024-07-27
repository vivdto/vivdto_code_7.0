#include "bits/stdc++.h"
using namespace std;

class Person{
    //public:
    string name;
    int age;
    public:
    // student(){
    //     cout<<"I'm Default Constructor!";
    // }

    Person(string name, int age = 18){
        
       this->name = name;
        this->age = age;
        cout<<"";
    }
    
    void setName(string nameVal){
        name = nameVal;
    }

        void setAge(int ageVal){
        age = ageVal;
    }

    string getName(){
        return name;
    }

     int getAge(){
        return age;
    }
};

    class student : public Person{
        public:
        string schoolName;


        student(string name, int age, string schoolName) : Person(name, age){

        this->schoolName = schoolName;
        }


    };


int main(){

    //student s1("Vivashwat", 18, "LNCT");

    student* newStudentPointer = new student("Vivashwat", 18, "LNCT");

    Person* personPointer = new Person("Ravi", 49);
    cout<<personPointer->getAge()<<personPointer->getName();

    cout<<newStudentPointer->getName()<<newStudentPointer->getAge()<<newStudentPointer->schoolName;


   // student* mixPointer = new Person("Vivsw", 19);

    Person* mixPointer = new student("Abhi", 98, "LNCT");

    // Dynamic Memory Allocation    
    // Jo v Pointer hoga usi type k object ko point krega!


    // student s7;
    // //student s("Vivashwat", 21);

    //student s1;
   // s1.setName("Vivs");
    
    // cout<<s.getName()<<endl;
    // cout<<s.getAge()<<endl;

    return 0;
}