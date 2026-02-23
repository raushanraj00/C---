// for Factorial of A number 
#include <iostream>
using namespace std; 
int factorial(int n=3){// here 3 is default parameter ; 
    int fact=1, sum =0; 
    for(int i = 1; i<=n;i++){
        fact = fact * i; 
    }
    return fact;
}
int main(){
    int n; 
    cout<< "Enter number :- "; 
    cin >> n; 
    cout << "Factorial of "<< n << " is " << factorial(n);
}
