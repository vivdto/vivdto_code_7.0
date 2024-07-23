/*
Style of writing code!

*/

#include<iostream>
using namespace std;


class Student{
    public:
    string name;
    float cgpa;

    void getPercentage(){
        cout<<(cgpa * 10)<<"% \n ";
    }

};

int main(){

    Student s1;
    s1.name = "Vivashwat Thakur";
    s1.cgpa = 7.97;
    cout<<s1.name<<endl;
    //cout<<s1.cgpa<<endl;
    s1.getPercentage();
    return 0;
}


//Protected used in inheritence! base & derived class mai use krte h!

// private - accessible inside the class and  friend function m v use hote h!