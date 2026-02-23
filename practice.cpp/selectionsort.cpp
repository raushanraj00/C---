// wap to sort array using selection sort
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
    for(int i = 0; i< n-1 ; i++){
        int index = i ;
        for(int j = i+1; j< n; j++){
            if(arr[j]<arr[index]){
                index  = j ;
            }
        }
        swap(arr[i],arr[index]);
    }
    cout<< "Sorted Array :"<< endl;
    for(int i = 0; i < n; i++){
        cout<< arr[i] << "\t ";
    }
}
