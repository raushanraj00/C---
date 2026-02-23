// // to remove duplicate elements from an array 
// #include <iostream>
// using namespace std; 
// int main(){
//     int arr[20] = {1,3,1,1,2,3,4,};
//     int n = 7;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i] == arr[j]){
//                 for(int k=j; k<n-1; k++){
//                     arr[k] = arr[k+1];
//                 }
//                 n--;
//                 j--; 
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout<< arr[i]<<" ";
//     }

// }

// // to delete an element from an array at a given position
// #include <iostream>
// using namespace std; 
// int main(){
//     int arr[20] = {1,2,3,4,5,6,7};
//     int n = 7;
//     int pos; 
//     cout<< "Enter the position to delete element: ";
//     cin>> pos; 
//     for(int i=pos; i<n-1; i++){
//         arr[i] = arr[i+1];
//     }
//     n--;
//     cout<< "Array after deletion: ";
//     for(int i=0; i<n; i++){
//         cout<< arr[i]<<" ";
//     }
// }

// // to delete an element from begiinning 
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[20] = {1,2,3,4,5,6,7};
//     int n = 7;
//     for(int i=0; i<n-1; i++){
//         arr[i] = arr[i+1];
//     }
//     n--;
//     cout<< "Array after deletion: ";
//     for(int i=0; i<n; i++){
//         cout<< arr[i]<<" ";
//     }
// }

// // to delete an element from end
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10] = {2,4,5,6,7,8,9}; 
//     int n = 7;
//     n--; 
//     cout<< "Array after deletion: ";
//     for(int i=0; i<n; i++){
//         cout<< arr[i]<<" ";
//     }
// }

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
