#include <iostream> 
using namespace std; 
class Node{
    public: 
    int data ; 
    Node* next; 

    /// constructor 
    Node(int data){
        this -> data = data; 
        this -> next = NULL; 
    }
}; 
void inserttail(Node* &tail, int d){
    // new node create 
    Node* temp = new Node(d);
    tail -> next = temp; 
    tail  = temp; 
}
void display(Node* head){
    Node* temp = head; 
    
    while(temp!=NULL){
        cout<< temp-> data << " "; 
        temp = temp -> next; 
    }
    cout << endl; 
}

int main(){
    Node* node1 = new Node(10); 

    Node* head = node1; 
    Node* tail = node1; 

    inserttail(tail,20);
    display(head);  
    inserttail(tail,30); 
    display(head); 
    inserttail(tail,40); 
    display(head);
    return 0;    
}   