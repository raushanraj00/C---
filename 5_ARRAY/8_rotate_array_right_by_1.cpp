#include <iostream>
using namespace std; 
int main(){
    int n;
    cout<< "Enter size :- "; cin>> n; 
    int arr[1000];
    cout<< "Enter elements:";
    for(int i = 0; i<n;i++){
        cin>> arr[i];
    };
    cout<< "Array elements are :- ";
    for(int i = 0; i<n;i++){
        cout<< arr[i] << " \t";
    }

    cout<< "\nAfter Shifting Right by 1 :-  ";

    int temp = arr[n-1]; 
    for(int i =n-2;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
    for(int i =0;i<n;i++){
        cout<< arr[i] << "\t";
    }
}
