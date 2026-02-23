// WAP to sum the digits of the number :=
#include <iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<< "Enter the number:- ";
    cin>> n;
    while(n!=0 || n>0){
        int a = n%10;
        rev = rev + a;
        n=n/10;
    }
    cout<< rev;
}