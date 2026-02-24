#include <iostream> 
using namespace std; 
class Student{
    private: 
    int roll; 
    string name; 
    
    public: 
    void setdata(int r, string n){
        roll = r; 
        name = n; 
        
    }
    void showdata(){
        cout<< "Roll No. : "<< roll << endl; 
        cout<< "Name :- " << name << endl; 
    }
}; 
int main(){
    Student s1; 
    s1.setdata(12,"Raushan"); 
    s1.showdata(); 
}