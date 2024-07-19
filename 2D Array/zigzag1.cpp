#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m; // Rows and column
    
    int mat[n][m]; // matrix

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>mat[i][j]; // to take input from user
        }
    }

    for(int i = 0; i<n; i++){
        if(i%2==0){ // if row == even; execute
        for(int j = 0; j<m; j++){
            cout<<mat[i][j]<<" ";
        }
        }
        
    else
        for(int j = m-1; j>=0; j--){
            cout<<mat[i][j]<<" ";
        }
        
    }
    
    cout<<endl;
    
    return 0;
}