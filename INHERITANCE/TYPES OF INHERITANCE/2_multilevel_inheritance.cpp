// multilevel inheritance
#include <iostream>
using namespace std; 
class Livingbeing{  // grandparent 
    public:
    void breathe(){ 
       cout<<  "I am breathing"<< endl; 
    }
};
class Animal : public Livingbeing{
    public: 
    void eat(){
        cout<< "I am eating." << endl; 
    }
};
class Dog:public Animal{
    public: 
    void bark(){
        cout<< "I am barking. " << endl; 
    }
}; 
int main(){
    Dog d; 
    d.breathe(); 
    d.eat(); 
    d.bark(); 
    return 0; 
}