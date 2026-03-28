#include <iostream> 
using namespace std; 
class node{
    public: 
    int data; 
    node* next; 
        node(int data){
            this-> data = data ; 
            this-> next = NULL ;
        }
};
int main(){
    node* node1 = new node(2); 
    node* node2 = new node(3); 
    node* node3 = new node(4);
    node* node4 = new node(5); 

    node1-> next = node2; 
    node2-> next = node3; 
    node3->  next = node4; 
    node4-> next = NULL; 

    node* head = node1; 

    int pos; cin>> pos; 
    node* temp = head; 

    for(int i = 1; i<pos-1; i++){
        temp = temp-> next; 
    }
 node* del = temp-> next; 
 temp-> next = del-> next; 
 delete del; 

 temp = head; 
 while(temp!=NULL){
    cout<< temp-> data << " "; 
    temp = temp-> next; 
 }
}
