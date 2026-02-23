// to find the pair of elements in an array whose sum is equal to a given number
#include <iostream>
using namespace std;
int main(){
    int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int n = 12; 
    bool result = 0; 
    int sum; 
    cout<< "Enter the sum value: ";
    cin>> sum;
    
    for(int i = 0; i<n; i++){
        if(arr[i]+arr[i+1] == sum){
            cout<< "Pair Found "<< endl; 
            cout<< "The pairs with sum " << sum << " are: " ; 
            cout<< arr[i] << " and " << arr[i+1] << "(at index " << i << " and "<< i+1 << ")" << endl;
            result = 1; 
            break; 
        } 
        }
        if(result == 0) cout<< "Pair not found"; 
    }