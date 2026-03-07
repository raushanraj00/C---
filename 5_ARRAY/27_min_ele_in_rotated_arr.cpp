// minimum element in rotated array 
#include <iostream>
using namespace std;
int main(){
    int n ; 
    cout<< "Enter Size :- "; 
    cin>> n; 
    int arr[100]; 
    cout<< "Enter rotated array elements :- "<< endl ; 
    for(int i = 0; i<n; i++){
        cin>> arr[i]; 
    }
    int start = 0, end = n-1,ans,mid; 

    while(start<=end){
        mid = (start+end)/2; 
        if(arr[mid]>=arr[0]){
            start = mid+1; 
        }
        else {
            ans = arr[mid]; 
            end = mid-1; 
        }
    }

    cout<< "Min. ELement is :- " << ans << endl; 
}