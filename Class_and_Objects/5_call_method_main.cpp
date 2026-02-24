#include <iostream> 
using namespace std;
class Dog{
    public: 
    void bark(){
        cout<< "Woof!" << endl;
    }
}; 
int main(){
    Dog mydog; 
    mydog.bark(); 
}