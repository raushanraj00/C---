// to insert an element in an sorted array . 
#include <iostream> 
using namespace std; 
int main(){
    int n, x; 
    cout<< "Enter number of Elements:- "; 
    cin>> n; 
    int arr[100]; 
    cout<< "Enter Elements:- ";
    for(int i = 0; i<n; i++){
        cin>> arr[i]; 
    }
    cout<< "Enter element to insert :- "; 
    cin>> x; 
    int p =0; 
    while (p<n && arr[p] < x){
        p++;
    }
    for(int i = n-1; i>=p; i--){
        arr[i+1] = arr[i]; 
    }
    arr[p] = x; 
    n++;
    cout<< "Array after Insertion is :- "; 
    for(int i= 0; i<n; i++){
        cout<< arr[i] << " "; 
    }
}