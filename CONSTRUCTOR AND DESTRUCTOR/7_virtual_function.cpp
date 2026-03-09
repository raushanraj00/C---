#include <iostream> 
using namespace std; 
class base{
    public: 
    void show(){
        cout<< "This is a base class." << endl; 
    }
}; 
class derived:public base{
    public: 
    void show(){
        cout<< "This is a derived class." << endl; 
    }
}; 
int main(){
    derived d1; 
    base *ptr; 
    ptr = &d1; 
    ptr -> show(); 
    // or we can use scope resolution operator    
    // as d1.base::show(); 
}