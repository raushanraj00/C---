#include <iostream>
using namespace std;
int arraysum(int arr[], int n){
    int sum =0; 
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n; 
    cout<< "Enter No. of elements:-" ;
    cin>> n; 
    int arr[n];
    for(int i = 0; i<n;i++){
    cout<< "Enter arr. element 1 :- ";
    cin>> arr[i];
    }
    cout<< "The sum of all elements is :- "<< arraysum(arr,n);
}