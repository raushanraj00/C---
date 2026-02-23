#include <iostream>
using namespace std;
void fibonacci(int n){
    int a=0,b=1;
    for(int i=0;i<=n;i++){
        cout<< a << "\t";
        int sum=a+b;
        a=b;
        b=sum;
    }
}
int fibonacci1(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci1(n-1)+fibonacci1(n-2);
}
int main(){
    int n;
    cout<< "Enter the position to find Fibonacci number: ";
    cin>> n;
    fibonacci(n);
    cout<< "\nFibonacci number at position " << n << " is " << fibonacci1(n);
}