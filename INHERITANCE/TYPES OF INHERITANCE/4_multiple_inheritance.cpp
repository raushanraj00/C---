// multiple inheritance :-  one child inherits from different parent classes ; 
#include <iostream> 
using namespace std; 
class Camera{
    public: 
    void camera(){ // parent 1; 
        cout<< "Added camera features. " << endl; 
    }
}; 
class Phone{ // parent 2 ;
    public:  
    void phone(){
        cout<< "Added Phone features. "<< endl; 
    }
}; 
class Smartphone:public Camera, public Phone{
    public: 
    void smartphone(){
        cout<< "Comes with both camera and phone." << endl; 
    }
}; 

int main(){
    Smartphone s1; 
    s1.camera(); 
    s1.phone(); 
    s1.smartphone(); 
}