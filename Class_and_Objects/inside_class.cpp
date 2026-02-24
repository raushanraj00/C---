#include <iostream> 
using namespace std; 
class Book{
    public: 
    void myname(){
        cout<< "Hello World!" << endl;
    }
    
};
int main(){
    Book mybook; 
    mybook.myname(); 
    return 0; 
}
