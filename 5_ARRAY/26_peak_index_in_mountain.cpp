#include <iostream> 
using namespace std;
int main(){
    int n,mid ; 
    cout<< "Enter size :- "; 
    cin>> n; 
    int arr[100]; 
    cout<< "Enter Elements :- "<< endl;
    for(int i =0 ; i<n; i++){
        cin>> arr[i];
    }
    int start = 0, end = n-1; 
    while(start<end){
        mid = (start+end)/2;

        if((mid == 0 || arr[mid] > arr[mid-1]) && (mid == n-1 || arr[mid] > arr[mid+1])){
            cout<< "Peak Index is :- " << mid << endl; 
            break;
        }
        else if(arr[mid]>arr[mid-1]){
            start = mid+1; 
        }
        else {
            end = mid-1; 
        }
    }

    return 0; 
}