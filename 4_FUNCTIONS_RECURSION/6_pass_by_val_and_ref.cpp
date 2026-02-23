// // pass by value and reference 
#include <iostream>
using namespace std; 
void value(int n){ // pass by value 
    n++;
}
void value1(int &n){  // [ass by reference ]
    n++;
}
int main(){
    int n= 10 ; 
    value(n);
    cout << n <<endl; 
    value1(n);
    cout << n ; 
}