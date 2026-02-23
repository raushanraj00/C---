// SWApping of two number using call by value and call by reference 
#include <iostream>
using namespace std; 
void swapval(int a, int b){ // pass by value 
    int temp; 
    temp = a; 
    a = b; 
    b= temp;
}
void swapref(int *a, int *b){ // pass by reference 
    int temp; 
    temp = *a;
    *a = *b; 
    *b = temp; 
}
void swapref1(int &a, int &b){
    int temp;
    temp = a; 
    a = b; 
    b = temp; 
}
int main(){
    int a,b;
    cout << "Enter a and b :- "; 
    cin >> a >> b; 
    swapval(a,b);
    cout<< "After Swapping(val): value of a=" <<a<<",b="<<b<<endl;
    swapref(&a,&b); // or use swapref1(a,b);
    cout<< "After Swapping(ref): value of a=" <<a<<",b="<<b<<endl;
}