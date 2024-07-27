#include<iostream>
using namespace std;

//stackOverflow--> infinite recursion
// missing base case
// local variables


void funct(){
    cout<<"function called";
    funct();
}

int main(){
    funct();
    return 0;
}

// this will lead to segmentation fault 