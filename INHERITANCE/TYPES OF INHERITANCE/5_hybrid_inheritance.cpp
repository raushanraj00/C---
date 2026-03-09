// hybrid inheritance is not directly supported in c++ due to ambiguity so its solution is virtual base class ; 
// Person :- base class 
// Student and Teacher :- derived class 
// Teaching Assistant :- derived from student and teacher

#include <iostream>
using namespace std;
class Car{
    public: 
    string name; 
    int weight; 
    void work(){
        cout<< "Car is working. " << endl;
    }
};
class BMW :virtual public Car{
    public: 
    int price, model; 
    void bmw(){
        cout<< "BMW is working. " << endl; 
    }
};
class Audi :virtual public Car{
    public: 
    int price, model; 
    void audi(){
        cout<< "Audi is working. " << endl; 
    }
};
class Hybrid : public BMW, public Audi{
    public: 
    void hybrid(){
        cout<< "Hybrid is working. " << endl; 
    }
};
int main(){
    Hybrid h; 
    h.bmw(); 
    h.audi();    
    // h.car();  this can't be called here 
    return 0; 
}