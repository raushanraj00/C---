#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<< "Enter year :- "; 
    cin>> n;
    if(n%400==0){
        cout<< "Leap Year.";
    }
    else if (n%4 && n%100!=0){
        cout<< "Leap Year.";
    }
    else{
        cout<< "Not a Leap Year.";
    }
} 