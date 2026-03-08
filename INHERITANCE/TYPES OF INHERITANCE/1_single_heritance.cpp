// TYPES OF INHERITANCE
// 1. Single Inheritance
// 2. Multiple Inheritance
// 3. Multilevel Inheritance
// 4. Hierarchical Inheritance
// 5. Hybrid Inheritance
// 6. multipath Inheritance

// single inheritance
#include <iostream>
using namespace std;
class Car{
    protected : 
    string name; 
    int weight ; 
    
    public : 
    void work(){
        cout<< "I am working" << endl; 
    }

}; 
class BMW : public Car {
    private: 
    int price, model; 
    public: 
    BMW(string name, int weight, int price , int model ){
        this-> name = name; 
        this-> weight = weight ; 
        this-> price = price ; 
        this-> model = model ; 
        cout<< "Name : " << name << endl; 
        cout<< "Weight : " << weight << endl; 
        cout<< "Price : " << price << endl ;
        cout<< "Model : " << model << endl; 

    }
     
}; 
int main(){
    BMW b1( "M5", 17000, 990000 , 330  );
    b1.work(); 
    return 0; 
}