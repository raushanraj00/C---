#include <iostream> 
using namespace std; 
int main(){
    int arr[100] = {10,15,18,20,25,30};
    int size = 6; 
    int pos; 
    cout<< "Enter position : "; cin>> pos; 
    for(int i = pos-1; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    size--; 
    for(int i =0; i<size ; i++){
        cout<< arr[i] << " "; 
        }
}