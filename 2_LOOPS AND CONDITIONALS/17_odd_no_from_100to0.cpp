// Write a program to print odd numbers from 100 to 0;
#include <iostream>
using namespace std;
int main(){
    int i;
    for (i=100; i>=0; i--){
        if(i%2!=0){
            cout << i <<endl;
        }
    }
}