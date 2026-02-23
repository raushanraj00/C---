// wap to reverse an array 
#include <iostream>
using namespace std; 
void revarr(int arr[],int n){
    int temp[n];
    for(int i = n-1,j =0;i>=0;j++,i--){
        temp[j]= arr[i];
    }
    for(int i =0;i<n;i++){
        arr[i]=temp[i];
    }
}
void revarrbyswap(int arr[],int n){
    int i = 0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[6] = {12,23,1,5,8,9};
    revarrbyswap(arr,6);
    //revarr(arr,6);
    for(int i=0;i<6;i++){
        cout<< arr[i] << "\t";
    }
}