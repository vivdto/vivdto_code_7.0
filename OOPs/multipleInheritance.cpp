#include<iostream>
using namespace std;

class Teacher{
public:
    int salary;
    string subject;
};

class Student{
public:
    int rollNo;
    float CGPA;

};

class TA : public Teacher, public Student{
    public:
    string name;
};


int main(){

    TA ta1;
    ta1.name = "Vivashwat Thakur";
    ta1.subject = "CPP - DSA";
    ta1.rollNo = 1;
    ta1.CGPA = 9.1;
    ta1.salary = 30,000;


    cout<<ta1.name<<" "<<ta1.subject<<" "<<ta1.rollNo<<" "<<ta1.CGPA<<" "<<ta1.salary<<" "<<endl;

    return 0;
}