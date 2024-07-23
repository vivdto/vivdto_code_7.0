#include<iostream>
using namespace std;

class User{

    int id;
    string password;

    public:
    string username;

    User(int id){
        this->id = id;
    }


    string getPW(){
        return password;
    }
    
    void setPW(string password){
        this->password = password;
    }

};


int main(){

    User user1(101); 
    user1.username = "Vivashwat";
    user1.setPW("admin@123"); 

    cout<<"Username:"<<" "<<user1.username<<endl;
    cout<<"Password:"<<" "<<user1.getPW()<<endl;
    
    User user2(111); 
    user2.username = "Vivdto";
    user2.setPW("admin@123#"); 

    cout<<"Username:"<<" "<<user2.username<<endl;
    cout<<"Password:"<<" "<<user2.getPW()<<endl;
    

    return 0;
}