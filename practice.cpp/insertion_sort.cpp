#include <iostream> 
#include <algorithm>
using namespace std; 
int main(){
    int n; 
    cout<< "Enter Size :- "; 
    cin>> n;
    int arr[100]; 
    cout<< "Enter elements:- "; 
    for(int i =0; i<n; i++){
        cin>> arr[i]; 
    }

    for(int i = 1; i<n; i++){
        for(int j= i; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1] ); 
            }
        }
    }

    cout<< "Sorted Array is :- ";
    for(int i =0; i<n; i++){
        cout<< arr[i] << " "; 
    }
    return 0; 
}