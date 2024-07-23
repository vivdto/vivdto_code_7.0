/*
Style of writing code!

*/

#include<iostream>
using namespace std;


class IG_User{
    string password;
    
    public:

    int id; 
    string username; 
    //string password;
    string bio;
    
    void deactivate(){
        cout<<"Deactivating the account!";
    }

    
    void editBio(string newBio){
        bio = newBio;
    }

};

int main(){

    IG_User u1;
    cout<<sizeof(u1)<<endl;

    IG_User s2;
    return 0;
}