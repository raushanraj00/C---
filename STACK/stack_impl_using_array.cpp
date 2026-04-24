#include <iostream> 
using namespace std; 
#define MAX 100

class stack{
    int arr[MAX]; 
    int top; 
    
    public: 
    stack(){
        top = -1; 
    }
    bool isEmpty(){
        return (top == -1); 
    }
    
    bool isFull(){
        return (top == MAX -1); 
    }
    
    void push(int x){
        if(isFull()){
            cout<< "OverFlow." << endl; 
            return ; 
        }
        arr[++top] = x; 
    }
    void pop(){
        if(isEmpty()){
            cout<< "UnderFlow." << endl; 
            return ; 
        }
        top--; 
    }
    
    int peek(){
        if(isEmpty()){
            cout<< "Stack Already Empty." << endl; 
            return -1; 
        }
        return arr[top];
    }
    void display(){
        for(int i = top ; i>=0; i--){
            cout<< arr[i] << " "; 
        }
        cout<< endl; 
    }
}; 
int main(){
    stack s; 
    s.push(10); 
    s.push(15); 
    cout << "Top Value : "<< s.peek() << endl; 
    
    s.display(); 
    // 
    s.pop() ; 
    s.display(); 
} 


    




