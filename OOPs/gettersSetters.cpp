//Special Method

// we don't want to give the direct access so we have this!

#include<iostream>
using namespace std;



class student{
    string name; 
    float cgpa;

public:

    void getPercentage(){
        cout<<(cgpa * 10)<<"% \n";
    }

    //setters

    void setName(string nameVal){
        name = nameVal;
    }

    
    void setCGPA(float cgpaVal){
        cgpa = cgpaVal;
    }

    // getters
    

    string getName(){
        return name;
    }

    
    float getCGPA(){
        return cgpa;
    }

};


int main(){
    student s1;
    s1.setName("Vivashwat");
    s1.setCGPA(9.1);

    cout<<s1.getName()<<endl;
    cout<<s1.getCGPA()<<endl;

    return 0;
}
