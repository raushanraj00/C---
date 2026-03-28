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
node* inserttailnode(int arr[], int index, int size){
    if(index == size){
        return NULL; 
    }
    node* temp = new node(arr[index]); 
    temp-> next = inserttailnode(arr, index+1, size);
}
int main(){
    node* head = NULL; 
    int arr[] = {2,4,6,8,10}; 
    int arr2[] = {12,14,16}; 
    head = inserttailnode(arr, 0, 5); 
    node* temp = head; 
    while(temp){
        cout<< temp-> data << endl; 
        temp = temp-> next; 
    }
    head = inserttailnode(arr2, 0, 3);
    node* temp2 = head; 
    while(temp2){
        cout<< temp2-> data << endl; 
        temp2 = temp2-> next; 
    }
}