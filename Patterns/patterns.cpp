#include<iostream>
using namespace std;

int main(){

    int n = 4;

    //Number Square Pattern

    for(int i=1; i<=n; i++){
        for(int j =0; j<n; j++){
            cout<<i;
        }
        cout<<endl;
    }

    // Star Square Pattern

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<"* ";
        }
          cout<<endl;
    }
    // Inverted Square Pattern
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //Half Pyramid Pattern

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    //Hollow Rectangle Pattern

    for(int i = 1; i<=n; i++){
        cout<<"*";
        for(int j = 1; j<=n-1; j++){
            if(i==1 || i == n){
                cout<<"*";
            } else {
                cout<<" ";
            }

        }
        cout<<"*"<<endl;
    }


    return 0;
}