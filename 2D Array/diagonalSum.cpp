#include<iostream>
using namespace std;

int main(){
    int n, m;
    int sum = 0;
    n = 3, m = 3;
    int mat[n][m];

    cout << "Enter the elements of the 3X3 matrix:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }

    for(int i=0; i<n; i++){
        sum += mat[i][i]; // Main diagonal element
        if(i != n-i-1){
            sum += mat[i][n-i-1]; // Secondary diagonal element
        }
    }
    cout << "Sum of the main and secondary diagonal elements: " << sum << endl;

    return 0;
}
