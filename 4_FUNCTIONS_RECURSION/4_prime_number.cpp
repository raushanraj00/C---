// // For prime Number 
#include <iostream>
using namespace std; 
bool prime(int n){
    if(n<=1) return 0; 
    for(int i = 2; i<n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n; 
    cout<< "Enter the Number:- ";
    cin >> n; 
    cout << prime(n);
}