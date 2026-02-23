// binary search code 
#include <iostream> 
using namespace std; 
int main(){
    int n,beg,end,x,mid;
    cout<< "Enter number of elements :- "; 
    cin>> n; 
    int arr[100]; 
    cout<< "Enter array Elements:- "; 
    for(int i =0; i<n; i++){
        cin>> arr[i];
    }
    cout<< "Enter the element to find :- "; 
    cin>> x;
    beg = arr[0], end = arr[n-1]; 
    mid = (beg + end)/2; 
     while (beg <= end) {
        mid = (beg + end) / 2;

        if (arr[mid] == x) {
            cout << "Element successfully found at index " << mid;
            return 0;
        }
        else if (arr[mid] < x) {
            beg = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    if(arr[mid]!=x) cout<< "Search Failed.";
    
}