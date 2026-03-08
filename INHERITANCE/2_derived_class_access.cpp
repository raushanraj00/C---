#include <iostream> 
using namespace std; 

class Human{
    string religion,color; 
    public:     
    string name;
    int age, weight; 
}; 
class Student : private Human {
    private:
        int roll; int fees; 
    public:
    void display(string name, int age, int weight, int roll, int fees){
        this->name = name; 
        this-> age  = age; 
        this-> weight = weight; 
        this-> roll = roll ;
        this-> fees = fees; 
        cout<< name << endl << age << endl << weight << endl  << roll << endl << fees << endl ;
    }
    
    
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
    Student s1; 
    // s1.name = "Raushan"; 
    // s1.roll = 123;
    // cout<< "Name :- " << s1.name << endl ; 
    // cout<< "Roll :- " << s1.roll << endl; 
    s1.display("Rohit",22,50,101,10000); 
    Teacher t1; 
    t1.fun("Raushan", 22, 70);
    
    return 0; 
}