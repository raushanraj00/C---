#include <iostream> 
using namespace std; 
int main(){
    int n,x; 
    cout<< "Enter Size :- "; 
    cin>> n; 
    int arr[1000]; 
    cout<< "Enter Array Elements :- "; 
    for(int i =0; i<n; i++){
        cin>> arr[i]; 
    }
    cout<< "Enter element to check :- "; 
    cin>> x; 
    int count = 0; 
    for(int i =0; i<n ; i++){
        if(x == arr[i])
        count ++ ; 
    }
    cout<< "Element " << x << " freq = " << count; 
    }