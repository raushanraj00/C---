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

// using function
// #include <iostream> 
// using namespace std; 
// int binarysearch(int arr[], int n, int key){
//     int i =0, j = n-1; 
//     int mid;
    
//     while(i<=j){
//         // mid element; 
//          mid = (i+j)/2; 
        
//         // check element:- 
//         if(arr[mid]==key){
//             return mid; 
//         }
//         // arr[mid]<key
//         else if(arr[mid]<key){
//             i = mid+1; 
//         }
//         // arr[mid]>key; 
//         else
//         j = mid-1; 
        
//     }
//     return -1; 
// }
// int main(){
//     int n,key; 
//     cout<< "Enter no. of elements:-"; 
//     cin>> n; 
    
//     int arr[100]; 
//     cout<< "Enter array Elements:- "; 
//     for(int i =0; i<n; i++){
//         cin>> arr[i]; 
//     }
//     cout<< "Enter element to search:- "; 
//     cin>> key;
    
//     binarysearch(arr,n,key); 
    
//     int result = binarysearch(arr,n,key); 
    
//     if(result!= -1) {
//         cout<<"Element Found at Index" << result <<endl;
//     }
//     else 
//     {cout<< "Element not Found"; 
//         }

//     return 0; 
// }