#include<iostream>
using namespace std;


    void binString(int n, int lastplace, string ans){
        if(n==0){
            cout<<ans<<endl;
            return;
        }
        if(lastplace !=1){
            binString(n-1, 0, ans + '0');
            binString(n-1, 1, ans + '1');
        } else{
            binString(n-1, 0, ans + '0');
        }
    }

int main(){
    string ans = " ";
    binString(3, 0, ans);
    
    return 0;
}