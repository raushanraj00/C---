#include <iostream> 
#include <string.h>
using namespace std;
class Car{
    public:
    string brand; 
    string model; 
    int year; 

    void horn(){
        cout<< "Beep Beep!" << endl; 
    }
};
int main(){
    Car c1; 
    c1.brand = "BMW"; 
    c1.model = "X5"; 
    c1.year = 2023; 

    c1.horn(); 
    cout<< c1.brand << " " << c1.model << " " << c1.year << endl; 
}