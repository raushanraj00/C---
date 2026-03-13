// without functiomn 
#include <iostream> 
using namespace std; 
class node{
   public: 
   int data ; 
   node* next; 
   
   // constructor 
   node(int data){
      this-> data = data; 
      this -> next = NULL; 
   }
}; 
int main(){
    node* node1 = new node(10); 
    node* node2 = new node(20); 
    node* node3 = new node(30); 
    
    node1-> next = node2; 
    node2-> next = node3; 
    node3-> next = NULL; 
    
    node* head = node1 ; 
    
    node* temp = head; 
    while(temp!=NULL){
        cout<< temp-> data << " " ;
        temp = temp-> next; 
        
    }
}



// #include <iostream> 
// using namespace std; 
// class node{
//     public: 
//     int data; 
//     node* next;
    
//     // constructor 
//     node(int data){
//         this-> data = data; 
//         this-> next = NULL; 
//     }
// }; 
// void inserthead(node* &head, int d){
//     // new node create 
//     node* temp = new node(d); 
//     temp -> next = head; 
//     head = temp; 

// }
// int main(){
//     // created a new node 
//     node* node1 = new node(10); 
//     cout<< node1 -> data << endl; 
//     cout<< node1 -> next << endl;
// }


