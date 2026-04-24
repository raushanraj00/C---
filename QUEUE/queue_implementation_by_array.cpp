#include <iostream> 
using namespace std; 

#define MAX 100

class queue {
    int arr[MAX]; 
    int front, rear; 
    
    public: 
    queue(){
        front = -1; 
        rear = -1; 
    }
    
    bool isEmpty(){
        return (front ==-1 || front> rear ); 
    }
    
    bool isFull(){
        return (rear == MAX-1); 
    }
    
    void enqueue(int x){
        if(isFull()){
            cout<< "Overflow." << endl; 
            return; 
        }
        if(front == -1) front = 0; 
        
        arr[++rear] = x; 
    }
    
    void dequeue(){
        if(isEmpty()){
            cout<< "UnderFlow." << endl; 
            return; 
        }
        front++ ;
        if(front > rear){
            front = rear = -1; 
        }
    }
    
    int peek(){
        if(isEmpty()){
            cout<< "Queue is Empty." << endl; 
            return -1; 
        }
        return arr[front]; 
    }
    
    void display(){
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        for(int i = front ; i<=rear ; i++){
            cout<< arr[i] << " "; 
            
        }
        cout << endl; 
    }
}; 
int main(){
    queue q; 
    q.enqueue(10);
    q.enqueue(20); 
    q.enqueue(30); 
    
    cout<< q.peek();
    cout<< endl; 
    q.display(); 
    q.dequeue(); 
    q.display(); 
}


