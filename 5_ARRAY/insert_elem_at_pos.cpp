#include <iostream> 
using namespace std; 
int main(){
    int n, pos, x; 
    cout<< "Enter number of Elements:- "; 
    cin>> n; 
    int arr[100]; 
    cout<< "Enter Elements:- ";
    for(int i = 0; i<n; i++){
        cin>> arr[i]; 
    }
    cout<< "Enter position to insert element :- "; 
    cin>> pos; 
    cout<< "Enter element to insert :- "; 
    cin>> x; 
    for(int i = n-1; i>=pos-1; i--){
        arr[i+1] = arr[i]; 
    }
    arr[pos-1] = x; 
    n++;
    cout<< "Array after Insertion is :- "; 
    for(int i= 0; i<n; i++){
        cout<< arr[i] << " "; 
    }
}
