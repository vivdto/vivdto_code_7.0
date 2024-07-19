#include<iostream>
using namespace std;

int main(){

    int y;
    cin>>y;

    bool isLeapYear = false;

    if(((y%4) == 0) && ((y%100)!=0)){
        isLeapYear = true;
    }

    else {
        isLeapYear = false;
    }
    
    if(isLeapYear == true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}