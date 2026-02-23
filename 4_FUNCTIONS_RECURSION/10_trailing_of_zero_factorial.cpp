// WA function to find trailing of zero in a factorial 
#include <iostream>
using namespace std; 
int trailing(int n){
    int count = 0;
    while(n>4){
        count+=n/5;
        n/=5;
    }
    return count;
}
int main(){
    int n; 
    cout<< "Enter the Factorial No.:- ";
    cin>> n; 
    trailing(n);
    cout<< "The number of Trailing zeroes in Factorial of " << n << " is " << trailing(n);
}