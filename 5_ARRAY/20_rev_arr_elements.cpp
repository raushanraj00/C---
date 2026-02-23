#include <iostream> 
using namespace std; 
int main(){
    int n; 
    cout<< "Enter Size :- "; 
    cin>> n; 
    int arr[1000]; 
    cout<< "Enter Array Elements :- "; 
    for(int i =0; i<n; i++){
        cin>> arr[i]; 
    }
    int i =0, j = n-1; 
            while(i<j){
            swap(arr[i],arr[j]); 
            i++; 
            j--;
        }
    cout<< "Reversed Array is :- "; 
    for(int i =0; i<n; i++){
        cout<< arr[i] << " "; 
    }
    }