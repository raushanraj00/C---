// to print duplicate elements in an array ! 
#include <iostream> 
using namespace std; 
int main(){
    int arr[10] = {1,2,3,4,5,6,7,6,8,9};
    int n = 10; 
    for(int i = 0; i<n; i++){
        for(int j = i+1 ; j<n; j++){
            if(arr[i] == arr[j]) {
            for(int k = j; k<n-1; k++){
                arr[k] = arr[k+1]; 
            }
            n--; 
            j--; 
        }
        }
    }
    cout<< "Arr elements:- ";
    for(int i =0; i<n; i++)
    cout<< arr[i] << " "; 
}