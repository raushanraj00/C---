// Check Armstrong Number ; 
#include <iostream>
using namespace std; 
void armstrong(int n){
    int org,num=0;
    org = n ; 
    while(n>0){
        int a=n%10;
        num = num + (a*a*a);
        n/=10;
    }
    if (org == num)
    cout<< "Armstrong Number. ";
    else cout<< "Not an armstrong Number.";
}
int main(){
    int n; 
    cout<< "Enter Number :- "; 
    cin>> n; 
    armstrong(n);
}
