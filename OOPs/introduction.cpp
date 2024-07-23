/*
Style of writing code!

*/

#include<iostream>
using namespace std;


class Student{
    public:

    int id; 
    string username; 
    string password;
    string bio;
    
    void deactivate(){
        cout<<"Deactivating the account!";
    }

    
    void editBio(string newBio){
        bio = newBio;
    }

};

int main(){

    Student s1;
    cout<<sizeof(s1)<<endl;

    Student s2;
    return 0;

    return 0;
}