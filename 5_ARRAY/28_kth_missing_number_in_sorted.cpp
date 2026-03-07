#include <iostream>
using namespace std; 
int main(){
    int n,k; 
    cout<< "Enter Size :- "; 
    cin>> n; 
    int arr[100]; 
    cout<< "Enter Sorted Elements :- ";
    
    for(int i =0; i<n; i++){
        cin>> arr[i]; 
    } 
    cout<< "Enter kth integer to find"; 
    cin>> k; 
    int start = 0, end = n-1, ans = n; 

    while(start<=end){
        int mid = (start+end)/2; 

        if(arr[mid]-mid-1>=k){
            ans = mid; 
            end = mid-1; 
        }
        else start = mid+1; 

    }
    cout<< "Kth missing Integer is :- " << ans + k << endl; 
    return 0; 
}