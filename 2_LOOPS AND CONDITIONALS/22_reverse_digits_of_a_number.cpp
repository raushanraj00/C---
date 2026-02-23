// WAP to print reverse of a number
#include <iostream>
using namespace std;
int main(){
    int n,ldigit=0;
    cout<< "Enter the number:- ";
    cin>> n;
    while(n!=0 || n>0){
        int a = n%10;
        ldigit = ldigit*10 + a;
        n=n/10;
    }
    cout<< ldigit;
}