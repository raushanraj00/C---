#include <iostream> 
using namespace std; 

class Human{
    public:     
    string name;
    int age, weight; 
}; 
class Student : public Human {
    public:
        int roll; int fees; 
}; 

int main(){
    Student s1; 
    s1.name = "Raushan"; 
    s1.roll = 123;
    cout<< "Name :- " << s1.name << endl ; 
    cout<< "Roll :- " << s1.roll << endl; 
}