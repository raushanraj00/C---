// to insert at a position without using any function
#include <iostream> 
using namespace std; 
class node{
    public: 
    int data ; 
    node* next; 
    node(int data){
        this-> data = data ; 
        this-> next = NULL; 
    }
}; 
int main(){
    node* node1 = new node(10);
    node* node2 = new node(20);
    node* node3 = new node(30); 
    node* node4 = new node(40); 
    
    node1-> next = node2; 
    node2 -> next = node3; 
    node3 -> next  = node4; 
    node4 -> next = NULL; 
    
    node* head = node1; 
    
    
    int pos = 3; 
    node* newnode = new node(25); 
    
    node* temp = head; 
    for(int i = 1; i<pos-1; i++){
        temp = temp-> next; 
    }
    newnode-> next = temp-> next; 
    temp-> next = newnode; 
    
    temp = head; 
    
    while(temp!=NULL){
        cout<< temp-> data << " "; 
        temp = temp-> next; 
    }
}




// #include <iostream> 
// using namespace std; 
// class Node{
//     public: 
//     int data ; 
//     Node* next; 

//     /// constructor 
//     Node(int data){
//         this -> data = data; 
//         this -> next = NULL; 
//     }
// }; 
// void inserttail(Node* &tail, int d){
//     // new node create 
//     Node* temp = new Node(d);
//     tail -> next = temp; 
//     tail  = temp; 
// }
// void display(Node* head){
//     Node* temp = head; 
    
//     while(temp!=NULL){
//         cout<< temp-> data << " "; 
//         temp = temp -> next; 
//     }
//     cout << endl; 
// }

// int main(){
//     Node* node1 = new Node(10); 

//     Node* head = node1; 
//     Node* tail = node1; 

//     inserttail(tail,20);
//     display(head);  
//     inserttail(tail,30); 
//     display(head); 
//     inserttail(tail,40); 
//     display(head);
//     return 0;    
// }   