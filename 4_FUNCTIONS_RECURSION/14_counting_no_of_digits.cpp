#include <iostream>
using namespace std;
int count(int n){
    int count = 0; 
    while(n>0){
        int a = n%10;
        count++;
        n/=10;
    }
    return count;
}
int main(){
    int n; 
    cout<< "Enter Number:- ";
    cin>> n;
    cout<< count(n);
}