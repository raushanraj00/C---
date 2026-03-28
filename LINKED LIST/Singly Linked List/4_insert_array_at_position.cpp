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
    node* head = NULL; 
    int arr[] = {2,4,6,8,10};
    for(int i = 0; i < 5; i++){
        if(head == NULL){
            head = new node(arr[i]);
        }
        else{
            node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = new node(arr[i]);
        }
    }
    int x ; 
    cout<< "Enter the position where you want to insert the array:-- "<< endl;
    cin>> x;
    int value; 
    cout<< "Enter the value you want to insert:-- "<< endl;
    cin>> value;
    node* temp = head; 
    for(int i = 1; i < x-1; i++){
        temp = temp-> next; 
    }
    node* newnode = new node(value);
    newnode-> next = temp-> next;
    temp-> next = newnode;

    temp = head; 
    while(temp){
        cout<< temp-> data << " " ;
        temp = temp-> next;    
    }
}