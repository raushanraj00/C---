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
int main(){
    // created a new node 
    node* node1 = new node(10); 
    cout<< node1 -> data << endl; 
    cout<< node1 -> next << endl;
}
