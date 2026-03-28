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
    node* head = NULL; 
    node* tail = NULL; 
    int arr[] = {2,4,6,8,10};
    for(int i = 0; i<5; i++){
    if(head == NULL){
        head = new node(arr[i]); 
        tail = head;

    }
    else {
        tail-> next = new node(arr[i]);
        tail = tail-> next;
    }
}
node* temp = head;
while(temp){
    cout<< temp-> data << endl; 
    temp = temp-> next; 

}
}