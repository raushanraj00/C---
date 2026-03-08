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
class Teacher : private Human{  // private inheritance and protected inheritance are same in terms of access specifier but different in terms of inheritance
    public: 
    void fun(string n, int a, int w){
        name = n;
        age = a;
        weight = w;
        cout<< "Name :- " << name << endl; 
        cout<< "Age :- " << age << endl;    
        cout<< "Weight :- " << weight << endl;
    }
};

int main(){
    // Student s1; 
    // s1.name = "Raushan"; 
    // s1.roll = 123;
    // cout<< "Name :- " << s1.name << endl ; 
    // cout<< "Roll :- " << s1.roll << endl; 
    Teacher t1; 
    t1.fun("Raushan", 22, 70);
    return 0; 
}