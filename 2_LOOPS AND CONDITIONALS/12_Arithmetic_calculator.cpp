// CREATE AN ARITHMETIC CALCULATOR ;
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<< "Enter value of 'a' and 'b' :- ";
    cin>> a >> b;
    int operation;
    cout<< "Enter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for division(only Integer value where a>b)\nEnter 4 for Multiplication\nEnter 5 for Modulus/Remainder\n";
    cin>> operation;
    switch(operation){
        case 1 : cout<< "Addition is :- " << a+b <<endl;
        break;
        case 2 : cout<< "Subtraction is :- " << a-b <<endl;
        break;
        case 3 : cout<< "Division is :- " << a/b << endl;
        break;
        case 4 : cout<< "Multiplication is :- " << a*b <<endl;
        break;
        case 5 : cout<< "Modulus/Remainder is :- " << a%b <<endl;
        break;
        default : cout<< "Can't Configure the Input. ";
    }
}