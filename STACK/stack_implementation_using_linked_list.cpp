#include <iostream> 
using namespace std; 

struct node{
    int data ; 
    node* next; 
}; 
class stack{
    node* top ; 
    
    public: 
    stack(){
        top = NULL; 
    }
    // check empty 
    bool isEmpty(){
        return (top == NULL); 
    }
    // push 
    void push(int x){
        node* newnode  = new node(); 
        
        if (newnode == NULL){
            cout<< "Stack Overflow. " << endl; 
            return; 
        }
        newnode-> data = x; 
        newnode-> next = top; 
        top = newnode ; 
    }
    // pop
    void pop(){
        if(isEmpty()){
            cout<< "Stack Underflow." << endl; 
            return ; 
        }
        node* temp = top; 
        top = top-> next; 
        delete temp; 
    }
    // peek
    int peek(){
        if(isEmpty()){
            cout<< "Stack is Empty." << endl; 
            return -1; 
        }
        return top-> data; 
        
    }
    
    void display(){
        if(isEmpty()){
            cout<< "Stack is Empty" << endl; 
            return; 
        }
        node* temp = top; 
        while(temp!=NULL){
            cout<< temp-> data << "->" ; 
            temp = temp-> next; 
        }
        cout<< "Null\n"; 
    }
}; 

int main(){
    stack s; 
    s.push(10);
    s.push(20); 
    cout<< s.peek();
    cout<< "\n"; 
    s.push(30); 
    s.display(); 
    s.pop(); 
    s.display(); 
}