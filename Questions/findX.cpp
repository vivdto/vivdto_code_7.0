#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int key = 20;
    
    int arr[n]= {10,20,30,40,50};
    bool found = false;
    
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
        found = true;
            cout<<i<<endl;
            break;
        }
}
    
    if(!found)
        cout<<"Not Found :< ";
    
    return 0;
}





