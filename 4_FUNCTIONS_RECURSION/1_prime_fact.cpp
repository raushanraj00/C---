#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}
int prime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) cout<<"Not Prime"<<endl;
        else cout<<"Prime"<<endl;
    }

}
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    cout<< "Factorial of " << n << " is " << factorial(n) << endl;
    prime(n); 
}