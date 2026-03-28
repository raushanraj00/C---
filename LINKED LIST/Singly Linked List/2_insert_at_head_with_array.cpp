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
    node * head ;
    head = NULL; 
    int arr[] = {2,4,6,8,10};
    
    // insertion of node at the beginning 
    
    // if linked list doesn't exist 
    for(int i = 0; i<5 ; i++){
    
    if(head == NULL ){
        head = new node(arr[i]); 
    }
    // if linked list exists  then :-- 
    else {
        node * temp; 
        temp = new node(arr[i]); 
        temp-> next = head; 
        head = temp; 
    }
}

node* temp = head; 
while(temp){
    cout<< temp-> data << endl; 
    temp = temp-> next; 
}
}