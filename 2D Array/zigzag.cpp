#include<iostream>
using namespace std;

int main(){
    
    /*
    
    Ab row wise print hona chaiyee zig zag mai
    Output for same would be
    1 5 9 13 14 10 6 2 3 7 11 15 4 8 12 16
    
    */
    
    
    int n, m;
    cin>>n>>m;
    
    // n = 2;
    // m = 2;
    int mat[n][m];


    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>mat[i][j];
        }
    }

    for(int j = 0; j<m; j++){
        if(j%2==0){  // iff column is even print direct else reverse
        for(int i = 0; i<n; i++){
            cout<<mat[i][j]<<" ";
        }
        }
        
    else
        for(int i = n-1; i>=0; i--){ // print reverse
            cout<<mat[i][j]<<" ";
        }
        
    }
    
    cout<<endl;
    
    return 0;
}