#include<iostream>
using namespace std;

int main(){
    int mat[][3]={{4,7,8}, {8,8,7}};
    int n = 2;
    int m = 3;
    int count = 0;
    
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
        if(mat[i][j]==7){
        count++;
            
    }
        }
            }

    cout<<count<<endl;
    
    return 0;
}