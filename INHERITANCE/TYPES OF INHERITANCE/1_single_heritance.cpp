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
    Car(string name, int weight){  // to call this parent constructor into child one
        this-> name = name; 
        this-> weight = weight; 
    }
}; 
class BMW : public Car {
    private: 
    int price, model; 
    public: 
    BMW(string name, int weight, int price , int model ): Car(name, weight) // constructor of parent class is called in the initialization list of child class constructor
    {
        // this-> name = name; 
        // this-> weight = weight ;  now optional as it was in constructor of parent 
        this-> price = price ; 
        this-> model = model ; 
        cout<< "Name : " << name << endl; 
        cout<< "Weight : " << weight << endl; 
        cout<< "Price : " << price << endl ;
        cout<< "Model : " << model << endl;
    }  
}; 
// if we create bmw class object then it will automatically call the constructor of car class and then the constructor of bmw class because of inheritance and also we can access the function of car class using the object of bmw class because of inheritance
int main(){
    BMW b1( "M5", 17000, 990000 , 330  );
    b1.work(); 
    return 0; 
}

// #include <iostream> 
// using namespace std; 

// class Human{
//   string religion,color; 
//   public: 
//   string name;
//   int age ;
  
//   Human(string religion, string color){
//       this->religion = religion; 
//       this->color = color; 
//   }
  
// };

// class Student:public Human{
//     int roll,classs,fee; 
    
//     public:
//     Student(string religion, string color, string name, int age, int roll, int classs, int fee) : Human(religion,color){
//         this->name = name; 
//         this-> age = age; 
//         this-> roll = roll; 
//         this-> classs = classs ; 
//         this-> fee = fee; 
        
//         cout<< "Religion :- " << religion << endl; 
//         cout<< "Color :  " << color << endl; 
//         cout<< "Name : " << name << endl; 
//         cout<< "Age :- " << age << endl; 
//         cout<< "Roll No.:- " << roll << endl; 
//         cout<< "Class :- " << classs << endl; 
//         cout<< "Fee :- " << fee << endl; 
//     }
// };
// int main(){
//     Student s1("Hindu", "Black", "Olivia", 12,101,5,10000); 
// }