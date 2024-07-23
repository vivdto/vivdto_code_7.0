#include<iostream> // include input-output stream
using namespace std; // use the standard namespace

// Definition of the Node class, which represents an element in the linked list
class Node {
public:
    int data; // data part of the node
    Node* next; // pointer to the next node

    // Constructor to initialize the node with a value
    Node(int val){
        data = val; 
        next = NULL;
    }

    // Destructor to clean up the memory used by the node
    ~Node(){
        if(next != NULL){ // if there's a next node
            cout<<"NODE Destructor for data: "<<data<<endl; // print message
            delete next; // delete the next node recursively
            next = NULL; // set the next pointer to NULL
        }
    }
};

// Definition of the List class, which represents a linked list
class List{
    Node* head; // pointer to the first node of the list
    Node* tail; // pointer to the last node of the list

public:
    // Constructor to initialize an empty list
    List() {
        head = NULL;
        tail = NULL;
    }

    // Destructor to clean up the list
    ~List(){
        cout<<"Destructor of LIST";
        if(head != NULL){
            delete head; // delete the head node, triggers recursive deletion
        }
    }

    // Function to add a node at the beginning of the list
    void push_front(int val){
        Node* newNode = new Node(val); // create a new node dynamically

        if(head == NULL){ // if the list is empty
            head = tail = newNode; // both head and tail point to the new node
        } else {
            newNode->next = head; // new node points to the current head
            head = newNode; // head is updated to the new node
        }
    }

    // Function to add a node at the end of the list
    void push_back(int val){
        Node* newNode = new Node(val); // create a new node dynamically

        if(head == NULL){ // if the list is empty
            head = tail = newNode; // both head and tail point to the new node
        }
        else {
            tail->next = newNode; // current tail node points to the new node
            tail = newNode; // tail is updated to the new node
        }
    }

    // Function to print the list
    void printList(){
        Node* temp = head; // temporary pointer to traverse the list

        while(temp != NULL){
            cout << temp->data << "->"; // print data of the current node
            temp = temp->next; // move to the next node
        }
        cout << "NULL" << endl; // end of list
    }

    // Function to insert a node at a specific position
    void insertValue(int value, int pos){
        Node* newNode = new Node(value); // create a new node
        Node* temp = head; // temporary pointer to traverse the list

        for(int i = 0; i < pos-1; i++){
            if(temp == NULL){
                cout << "Position is Invalid\n";
                return;
            }
            temp = temp->next; // move to the next node
        }
        newNode->next = temp->next; // new node points to the next node
        temp->next = newNode; // previous node points to the new node
    }

    // Function to remove the first node of the list
    void pop_front(int val){
        if(head == NULL){ // if the list is empty
            cout << "LL is empty!";
            return;
        }
        Node* temp = head; // temporary pointer to the head
        head = head->next; // head is updated to the next node

        temp->next = NULL; // isolate the old head
        delete temp; // delete the old head
    }

    // Function to remove the last node of the list
    void pop_back() {
        if(head == NULL) { // if the list is empty
            return;
        }
        if(head->next == NULL) { // if there's only one node
            delete head; // delete the head
            head = NULL; // set head to NULL
            return;
        }

        Node* temp = head; // temporary pointer to traverse the list
        while(temp->next->next != NULL) {
            temp = temp->next; // move to the second last node
        }
        // temp now points to the second last node
        temp->next = NULL; // remove the last node
        delete tail; // delete the old tail
        tail = temp; // update tail to the second last node
    }

    // Function to search for a value iteratively
    int searchItr(int key){
        Node* temp = head; // temporary pointer to traverse the list
        int idx = 0; // index to track position
        while(temp != NULL){
            if(temp->data == key){
                return idx; // return index if key is found
            }
            temp = temp->next; // move to the next node
            idx++; // increment index
        }
        return -1; // return -1 if key is not found
    }
};

int main(){
    List ll; // create a new list object
    ll.push_front(5); // add 5 at the front
    ll.push_front(4); // add 4 at the front
    ll.push_front(3); // add 3 at the front
    ll.push_front(2); // add 2 at the front
    ll.push_front(1); // add 1 at the front
    // List is now: 1->2->3->4->5->NULL

    ll.printList(); // print the list

    // ll.pop_back(); // remove the last element
    // List is now: 1->2->3->4->NULL
    // ll.printList(); // print the list
    // ll.searchItr(3); // search for value 3

    cout << ll.searchItr(3) << endl; // print the index of value 3 (expected: 2)

    return 0; // end of program
}
