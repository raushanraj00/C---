#include <iostream> 
using namespace std; 
class human{
    private: 
    int a ; 
    protected: 
    int b ; 
    public: 
    int c; 
    // accessing wihtin the class ; // can also be written within protected l 
    void fun(){
        a = 10; 
        b = 20; 
        c = 30; 
        cout<< "Element printed "; 
    }
}; 
int main(){
    human rohit; 
    // rohit.a = 10 && rohit.b = 10 -- private and protected so invalid ; 
    rohit.c = 10; 
    rohit.fun(); 
}