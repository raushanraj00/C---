// // Check prime numbers and not prime numbers from array
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the size :- ";
//     cin >> n;
//     int arr[1000];
//     cout << "Enter array elements :- ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << "Prime Numbers Are:- ";
//     for (int i = 0; i < n; i++) {
//         int count = 0; 
//         for (int j = 1; j <= arr[i]; j++) {
//             if (arr[i] % j == 0) {
//                 count++;
//             }
//         }
//         if (count == 2) {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << "\nNot Prime Numbers Are:- ";
//     for (int i = 0; i < n; i++) {
//         int count = 0; 
//         for (int j = 1; j <= arr[i]; j++) {
//             if (arr[i] % j == 0) {
//                 count++;
//             }
//         }
//         if (count != 2) {
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

//     cout << "Prime Numbers Are:- ";
//     for(int i = 0; i < arr.size(); i++){
//         int count = 0;
//         for(int j = 1; j <= arr[i]; j++){
//             if(arr[i] % j == 0) count++;
//         }
//         if(count == 2) cout << arr[i] << " ";
//     }

//     cout << "\nNot Prime Numbers Are:- ";
//     for(int i = 0; i < arr.size(); i++){
//         int count = 0;
//         for(int j = 1; j <= arr[i]; j++){
//             if(arr[i] % j == 0) count++;
//         }
//         if(count != 2) cout << arr[i] << " ";
//     }
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    vector<int> prime, nonPrime;

    for (int i = 0; i < arr.size(); i++) {
        int count = 0;

        for (int j = 1; j <= arr[i]; j++) {
            if (arr[i] % j == 0) count++;
        }

        if (count == 2) prime.push_back(arr[i]);
        else nonPrime.push_back(arr[i]);
    }

    cout << "Prime Numbers Are:- ";
    for (int i = 0; i < prime.size(); i++) cout << prime[i] << " ";
    cout << "\nNot Prime Numbers Are:- ";
    for (int i = 0; i < nonPrime.size(); i++) cout << nonPrime[i] << " ";
}
