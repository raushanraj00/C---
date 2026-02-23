// Print factorial of a number 
#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<< "Enter the number to find factorial:- ";
    cin>> n;
    int product = 1; 
    for(int i = 1; i<=n ; i++){
        product = product * i; 
    }
    cout<< "The factorial of " << n << " is " << product <<endl;
}