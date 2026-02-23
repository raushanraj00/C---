// to remove duplicate elements from an array 
#include <iostream>
using namespace std; 
int main(){
    int arr[20] = {1,3,1,1,2,3,4,};
    int n = 7;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                for(int k=j; k<n-1; k++){
                    arr[k] = arr[k+1];
                }
                n--;
                j--; 
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
}
