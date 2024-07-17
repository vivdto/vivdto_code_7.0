// Arithmetic progression | an = a + (n − 1)d

#include<iostream>
using namespace std; 

int main(){

int a, n, d; 

    cout<<"Enter the first term of A.P : ";
    cin>>a;
    cout<<"Enter the common difference of A.P : ";
    cin>>d;
    cout<<"Enter the term which you need to find : ";
    cin>>n;


int result = (a+((n-1)*d));

cout<<result;

    return 0;
}