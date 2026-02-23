// WAP to count digits of a number;
#include <iostream>
using namespace std;
int main(){
    int n,count = 0;
    cout<< "Enter the number :- ";
    cin>> n;
    while(n!=0){
        n = n/10;
        count++;
    }
    cout<< count ;
}