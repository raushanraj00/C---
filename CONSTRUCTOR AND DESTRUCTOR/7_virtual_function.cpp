#include <iostream> 
using namespace std; 
class base{
    public: 
    virtual void show(){  // now after writing virtual keyword here , it will call the function of derived class instead of base class because of late binding and also we can call the function of base class using scope resolution operator
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