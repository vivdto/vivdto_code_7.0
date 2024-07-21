#include<iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

    Node(int val){
        data = val; 
        next = NULL;
    }

};

class List{ // colllection of nodes

    Node* head; 
    Node* tail;

public:
List() {
    head = NULL;
    tail = NULL;
}

    void push_front(int val){
        Node* newNode = new Node(val); // dynamic

        if(head==NULL){
            head = tail = newNode;
        } else{
            newNode->next = head; // newNode.next 
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head==NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList(){
        Node* temp = head;

        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp ->next;
        }
        cout<<"NULL"<<endl;
    }

    void insertValue(int value, int pos){

        Node* newNode = new Node(value);
        Node* temp = head;
        
        for(int i = 0; i<pos-1; i++){
            if(temp == NULL){
                cout<<"Position is Invalid\n";
                return;
            }
            temp = temp -> next;
        }
        newNode->next = temp->next;
        temp->next = newNode;

    }
};



int main(){

    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);


    ll.push_back(6);
    ll.push_back(5);
    ll.push_back(4);

    //1->2->3->NULL


    ll.printList();

    ll.insertValue(100,2);
    ll.printList();

    return 0;
}