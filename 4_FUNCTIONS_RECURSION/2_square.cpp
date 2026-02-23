//function to find square of a number . 
#include <iostream>
using namespace std; 
int square(int n){
    return n*n;
}
int main(){
    int n; 
    cout<< "Enter Number.";
    cin>> n; 
    cout<< "Square of the Number is " << square(n) <<endl;
}