// write a program to print a raised to power b value 
#include <iostream>
using namespace std; 
int main (){
    int a,b,power = 1;
    cout<< "Enter values of a and b :- ";
    cin>> a >> b;
    for(int i = 1; i<=b; i++){
        power = power*a;
    }
    cout<< a << " raised to power " << b << " is " << power <<endl;
}
