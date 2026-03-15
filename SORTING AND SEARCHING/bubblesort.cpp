// buubble sort in ascending order
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<< "Enter size :- " ; cin>> n;
    int arr[1000];
    for(int i=0; i<n ; i++){
        cout<< "Enter Element " << i+1 << ": ";
        cin>> arr[i];
    }
    for(int i = 0; i<n-1; i++){
        bool swapped = 0 ;
        for(int j = 0 ; j<n-1-i; j++ ){
            if(arr[j]> arr[j+1]){
                swapped = 1 ;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0)
        break;
    }
    for(int i = 0; i<n; i++){
        cout<< arr[i] << "\t";
    }
}
