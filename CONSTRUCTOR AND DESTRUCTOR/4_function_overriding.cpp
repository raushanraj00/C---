#include <iostream>
using namespace std;
class A {
    public : 
    void show(){
        cout<< "I am Base class."; 
    }
}; 
class B:public A{
    public: 
    void show(){
        cout<< "I am derived Class."; 
    }
}; 
int main(){
    B b1,b2;
    b1.show();  // this will call derived class 
    b1.A::show();  
}