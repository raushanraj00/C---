// Hierarchical Inheritance :- Multiple child classes are derived from a single parent class. In this type of inheritance, there is one parent class and multiple child classes that inherit from it.
#include <iostream>
using namespace std; 
class Openaccount{
    public: 
    void accopen(){
        cout<< "Account Opened" << endl; 
    }
}; 
class Saving : public Openaccount{
    public: 
    void saving(){
        cout<< "Saving Account Info." << endl;
    }
}; 
class Current : public Openaccount{
    public: 
    void current(){
        cout<< "Current Account info." << endl; 
    }
};  

int main(){
    Current c1; 
    // c1.saving();    // cant call child to child 
    c1.accopen(); 
    c1.current();

}