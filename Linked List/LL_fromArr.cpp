#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={10,20,30,40,50};
    
    return 0;
}



Node *head = new Node(arr[0]);
Node *current = head;

for(int i=1; i<arr.size(); i++){
    current-> next = new Node(arr[i])
    current = current->next;
}

return head;