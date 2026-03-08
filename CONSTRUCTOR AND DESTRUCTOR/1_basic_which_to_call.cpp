#include <iostream> 
using namespace std;

class Car {
    string name, model; 
    public:
    Car(){
        cout<< "This is Parent class Constructor\n"; 
    }
    ~Car(){
        cout<< "Parent Class Destructor\n"; 
    }
}; 
class BMW : public Car{
    int price, weight; 
    public: 
    BMW (){
        cout<< "This is child class constructor \n";  
    }
    ~BMW(){
        cout<< "Child Class Destructor\n" ; 
    }
}; 
int main(){
    BMW b1; // firstly parent class constructor will be called then child class constructor will be called . 

    
}