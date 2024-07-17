#include "bits/stdc++.h"
using namespace std;

int main(){

    int num; 
    cin>>num; 
    int res = abs(num%10);
    cout<<res<<endl;


//here --> abs() <---  makes the negative number positive so we get the last digit correctly!


    return 0;
}