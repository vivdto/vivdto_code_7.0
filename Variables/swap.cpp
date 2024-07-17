#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int a = 5, b = 7;
    // //output a = 7, b = 5; 

    // int temp = a; 
    // a = b;
    // b = temp;
    // cout<<a<<b<<endl;

    // int c = 8, d = 9; 
    // swap(c,d);
    // cout<<c<<d<<endl;

    //swap two names;

    char nameOne [15] = "Vivashwat";
    char nametwo [15] = "Anushka";

    char temp[15];

    cout<<nameOne<<" "<<nametwo<<endl;

    strcpy(temp, nameOne);
    strcpy(nameOne, nametwo);
    strcpy(nametwo, temp);

    cout<<nameOne<<" "<<nametwo;


    return 0;
}