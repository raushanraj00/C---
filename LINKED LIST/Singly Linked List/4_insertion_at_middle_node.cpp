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
// class node{
//     public : 
//     int data; 
//     node* next; 

//     // constructor
//     node(int data){
//         this -> data = data; 
//         this -> next = NULL; 
//     }
// }; 
// void insertatmid(node* &head, int d, int pos){
//     node* temp = head; 
//     int count = 1; 
    
//     while(count< pos-1){
//         temp = temp-> next; 
//         count++ ; 
//     }
//     node* nodetoinsert = new node(d);
//     nodetoinsert-> next = temp -> next; 
//     temp -> next = nodetoinsert;
// }
// void display(node* head){
//     node* temp = head; 

//     while(temp!=NULL){
//         cout<< temp-> data << " "; 
//         temp = temp -> next;  
//     }
//     cout<< endl; 
// }
// int main(){
//     node *node1 = new node(10); 
//     node* head = node1; 
//     node* node2 = new node(20); 
//     node1 -> next = node2; 
//     node* node3 = new node(40); 
//     node2 -> next = node3; 

//     cout<< "list before insertion:- "<< endl;
//     display(head); 
//     insertatmid(head,30,3);
//     cout<< "List after insertion:- " << endl; 
//     display(head);  
// }