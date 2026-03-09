// multilevel inheritance
#include <iostream>
using namespace std; 
class Livingbeing{  // grandparent 
    public:
    void breathe(){ 
       cout<<  "I am breathing"; 
    }
};
class Animal : public Livingbeing{
    
};