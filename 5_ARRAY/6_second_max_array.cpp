// find second max element 
#include <iostream>
using namespace std; 
int secmaxarr(int arr[],int n){
    int second = arr[0],ans = arr[0];
    for(int i = 0; i<n ; i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    for(int i =0; i<n ; i++){
        if(ans!=arr[i]){
            second=max(second,arr[i]);
        }
    }
    if(second == arr[0]) return -1;
    return second;
}
int main(){
    int arr[8] = {1,5,7,23,54,23,76,77};
    cout<< secmaxarr(arr,8);
}