#include <iostream> 
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[low]; 
    int i = low; 
    int j = high; 

    while(i<j){
        while (arr[i] <= pivot && i < high){
            i++;
        }
        while (arr[j] > pivot && j > low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]); 
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quicksort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr, low, high); 
        quicksort(arr, low, pi-1); 
        quicksort(arr, pi+1, high); 
    }
}
int main(){
    int arr[] = {10, 80, 30, 90, 40, 50, 70}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    quicksort(arr, 0, n-1); 
    cout<< "Sorted array: " << endl; 
    for(int i=0; i<n; i++){
        cout<< arr[i] << " " ; 
    }
    return 0;
}