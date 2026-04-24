#include <iostream>
using namespace std; 

#define MAX 100 

class circularqueue{
    int arr[MAX]; 
    int front, rear; 
    
    public: 
    circularqueue(){
        front = rear = -1; 
    }
    
    bool isEmpty(){
        return (front== -1);
    }
    bool isFull(){
        return ((rear+1)%MAX ==front); 
    }
    
    void enqueue(int x){
        if(isFull()){
            cout << "Overflow." << endl; 
            return ; 
        }
        if(isEmpty()){
            front = rear = 0; 
        }
        else{
            rear = (rear+1)%MAX; 
            
        }
        arr[rear] = x; 
    }
    
    void dequeue(){
        if(isEmpty()){
            cout<< "Underflow." << endl; 
            return;
        }
        if(front==rear) front = rear = -1; 
        else front = (front+1)%MAX;
    }
    
    int peek(){
        if(isEmpty()){
            cout<< "Queue Is Empty." << endl;
            return -1;
        }
        return arr[front]; 
    }
    
    void display(){
        if(isEmpty()){
            cout << "Queue is Empty." << endl; 
            return; 
        }

        int i = front;
        while(true){
            cout << arr[i] << " ";
            if(i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
};
int main(){
    circularqueue q;

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue after enqueue: ";
    q.display();

    // Peek front element
    cout << "Front element: " << q.peek() << endl;

    // Dequeue one element
    q.dequeue();
    cout << "Queue after one dequeue: ";
    q.display();

    // Add more elements to check circular behavior
    q.enqueue(40);
    q.enqueue(50);

    cout << "Queue after more enqueue: ";
    q.display();

    q.dequeue();
    q.dequeue();

    cout << "Queue after two more dequeues: ";
    q.display();

    // Final peek
    cout << "Front element now: " << q.peek() << endl;

    return 0;
}