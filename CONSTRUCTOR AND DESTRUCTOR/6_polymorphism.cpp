#include <iostream>
using namespace std;
class data{
    public: 
    void func(int a,int b){
        cout<< a+b << endl; 
    }
void func(double a, double b){
        cout<< a+b << endl; 
}
void func(char a, char b){
    cout<< "1st char : " << a << endl <<  "2nd char : " << b << endl; 
}
}; 
int main(){
    data d1; 
    d1.func(1.4,5.3); 
    d1.func(2,4); 
    d1.func('a','b');
}