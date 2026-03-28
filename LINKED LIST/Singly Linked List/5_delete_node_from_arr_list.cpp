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
    node* head = NULL; 
    node* tail = NULL; 

    int arr[] = {2,3,4,5,6,7}; 
    for(int i = 0; i<6; i++){
    if(head == NULL){
        head = new node(arr[i]); 
        tail = head;
    }
    else {
        tail-> next = new node(arr[i]);
        tail = tail-> next;
    }
}
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