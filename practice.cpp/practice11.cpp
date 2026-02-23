// #include <iostream> 
// using namespace std; 
// int main(){
//     int a[100] = {10,15,25,30,35};
//     int size = 5;
//     int pos,x;
//     cout<< "Enter position and Value "; cin>> pos>> x; 
//     for(int i = size-1; i>=pos; i--){
//         a[i+1] = a[i];
//     }
//     a[pos] = x;
//     size++ ;
//     for(int i = 0; i<size; i++){
//         cout<< a[i] << " ";
//     }
// }

// #include <iostream> 
// using namespace std; 
// int main(){
//     int arr[100] = {10,15,18,20,25,30};
//     int size = 6; 
//     int pos; 
//     cout<< "Enter position : "; cin>> pos; 
//     for(int i = pos-1; i<size-1; i++){
//         arr[i] = arr[i+1];
//     }
//     size--; 
//     for(int i =0; i<size ; i++){
//         cout<< arr[i] << " "; 
//         }
// }


// #include <iostream> 
// using namespace std; 
// int main(){
//     int arr[100] = {9,5,6,7,8};
//     int n = 5;
//     int temp; 
//     temp = arr[0]; 
//     for(int i =0; i<n-1; i++){
//         arr[i] = arr[i+1];
//     }
//     arr[n-1] = temp;
//     for(int i =0; i<n; i++)
//     cout<< arr[i] << " ";
// }

// shift 2 elements by right 
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[100] = {9,5,6,7,8};
//     int n = 5;
//     for(int k = 0; k < 2; k++) {
//         int temp = arr[n-1];
//         for(int i = n-1; i > 0; i--) {
//             arr[i] = arr[i-1];
//         }
//         arr[0] = temp;
//     }
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }








