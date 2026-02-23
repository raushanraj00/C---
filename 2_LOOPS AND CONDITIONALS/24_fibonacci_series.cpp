// write  a program to print fibonacci series upto n terms; 
#include <iostream>
using namespace std;
int main(){
    int a = 1, b = 1;
    int n; 
    cout<< "Enter the terms :- ";
    cin>> n;
    for(int i = 1; i<=n; i++){
        cout<< a << "\t";
        int sum = a+b;
        a = b; 
        b = sum; 
    }
    cout<< "\n";
}