#include<iostream>
using namespace std;

void counter(){
    static int count = 0; // 1 1 1  ---> 1,2,3
   // int count = 0; // 1,2,3 --> 1,1,1
    count++;
    cout<<count<<endl;
}

int main(){
    counter();
    counter();
    counter();
    return 0;
}