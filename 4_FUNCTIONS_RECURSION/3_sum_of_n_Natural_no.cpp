// Function to Sum Of n natural numbers 
#include <iostream>
using namespace std; 
int sum(int n){
    int s=0;
    for(int i = 1; i<=n; i++){
        s+=i;
    }
    return s;
}
int main(){
    int n; 
    cout<< "Enter the number:- "; 
    cin>> n; 
    cout<< "Sum of first " << n << " Natural Numbers is " << sum(n) << endl;
}