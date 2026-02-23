// to find the lowest and largest number in an array 
#include <iostream> 
#include <climits>
using namespace std; 
void larminarr(int arr[], int n){
    int min = INT_MAX, max = INT_MIN; 
    for(int i =0 ; i<n;i++){
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Max element is :- " << max<< endl; 
    cout << "Min element is :- " << min << endl;
}
int main(){
    int n; 
    cout<< "Enter No. of elements :- "; 
    cin>> n; 
    int arr[n]; 
    for(int i = 0 ; i<n;i++){
        cout<< "Enter Element" << i+1 << ":";
        cin>> arr[i]; 
    }
    larminarr(arr,n);
}