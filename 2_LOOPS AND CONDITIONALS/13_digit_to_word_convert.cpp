// WAP to convert Digit to word ;
#include <iostream>
using namespace std;
int main (){
    int number;
    cout<< "Enter The digit (from 0-9) :- ";
    cin >> number;
    switch(number){
        case 1 : cout<< "One";
        break;
        case 2 : cout<< "Two";
        break;
        case 3 : cout<< "Three";
        break;
        case 4 : cout<< "Four";
        break;
        case 5 : cout<< "Five";
        break;
        case 6 : cout<< "Six";
        break;
        case 7 : cout<< "Seven" ;
        break;
        case 8 : cout<< "Eight";
        break;
        case 9 : cout<< "Nine";
        break;
        default : cout<< "Entered digit is not configured";
    }
    return 0;
}