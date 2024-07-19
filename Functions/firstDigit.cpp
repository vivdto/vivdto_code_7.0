#include <iostream>
using namespace std;

int firstDigit(int n){
    if (n<10){
        cout<<n;
    }

    else
    {
        n /=10;
        firstDigit(n);
    }

    return n;

}

int main(){
    int n = 127;
    firstDigit(n);

    return 0;
}



/*

    string numStr = to_string(n);

    // Print the first character (which is the first digit)
    cout << numStr[0] << endl;



*/