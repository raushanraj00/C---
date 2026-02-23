// to multiply all the elements of an array 
#include <iostream>
using namespace std; 
int arraymul(int arr[], int n){
    int mul = 1;
    for(int i =0 ; i<n; i++){
        mul*=arr[i];
    }
    return mul;
}
int main(){
    int n; 
    cout<< "Enter no. of terms :- "; 
    cin>> n; 
    int arr[n]; 
    for(int i = 0; i<n; i++){
        cout<< "Enter element 1 :- "; 
        cin>> arr[i]; 
    }
    cout<< "Multiplication of each elements of this array is :- " << arraymul(arr,n); 
}