#include <iostream> 
using namespace std; 
int main(){
    int n,x; 
    cout<< "Enter Size :- "; 
    cin>> n; 
    int arr[1000]; 
    int lb = -1, ub = -1; 
    cout<< "Enter Array Elements :- "; 
    for(int i =0; i<n; i++){
        cin>> arr[i]; 
    }
    cout<< "Enter element to find :- "; 
    cin>> x; 
    int count = 0; 
    for(int i = 0; i<n; i++ ){
        if(arr[i] == x ){
            if(lb == -1){ lb = i;} 
            ub = i; 
            count++; 
        }
    }
    if(lb==-1) cout<< "Element not found ";
    else {
    cout<< "Lower Bound Will be :- " << arr[lb] << endl; 
    cout<< "Upper Bound will be :- " << arr[ub] << endl; 
    cout<< "Frequency of the element :- " << count ; 
    }
}