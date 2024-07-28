#include<iostream>
using namespace std;

string reverse(string n){
    int size = n.size();
    string reversed = "";
    for(int i = size-1; i>=0; i--){
        reversed+=n[i];
    }
    return reversed;
}

int main(){
    string n; 
    n = "Geeks for Geeks";
    
    
    
    cout<<reverse(n)<<endl;
}


