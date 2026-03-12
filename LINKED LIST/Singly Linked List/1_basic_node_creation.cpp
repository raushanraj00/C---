#include <iostream> 
using namespace std; 
class node{
    public: 
    int data; 
    node* next;
    
    // constructor 
    node(int data){
        this-> data = data; 
        this-> next = NULL; 
    }
}; 
void inserthead(node* &head, int d){
    // new node create 
    node* temp = new node(d); 
    temp -> next = head; 
    head = temp; 

}

void printnode(node* head){
    node* temp = head; 
    while(temp!=NULL){
        cout << temp-> data << " "; 
        temp = temp-> next; 
    }
    cout<< endl; 
}
int main(){
    // created a new node 
    node* node1 = new node(10); 
    cout<< node1 -> data << endl; 
    cout<< node1 -> next << endl;
    
    // head pointed to node1
    node* head = node1; 
    cout<< "List before Insertion:- "<< endl; 
    printnode(head); 
    inserthead(head,12); 
    cout<< "List after Insertion:- "<<endl; 
    printnode(head); 
    inserthead(head,15); 
    cout<< "List after Insertion:- "<<endl;
    printnode(head);
}
