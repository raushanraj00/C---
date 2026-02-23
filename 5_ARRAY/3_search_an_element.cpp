// search an element in an array such that print index if element finds and print -1 if not found 
#include <iostream>
using namespace std; 
int search(int arr[],int n,int x){
    for(int i = 0 ; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1; 
}
int main(){
    int arr[6] = {12,23,21,5,6,7};
    int x;
    cout<< "Enter element to find:-"; cin>> x;
    cout << search(arr,6,x);
}