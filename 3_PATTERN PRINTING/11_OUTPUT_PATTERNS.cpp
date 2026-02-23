// #include <iostream>
// using namespace std; 
// int main(){
//     int n; 
//     cout<< "Enter number of rows :- "; 
//     cin>> n; 
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 1;j<=n-i; j++){
//             cout<< "  ";
//         }
//         for(int j = 1; j<=i; j++){
//             cout<< j << " ";
//         }
//         cout<< "\n";
//     }
// }
// output 
// Enter number of rows :- 5
//         1 
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5
// #include <iostream>
// using namespace std; 
// int main(){
//     int n; 
//     cout<< "Enter number of rows :- "; 
//     cin>> n; 
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 1;j<=n-i; j++){
//             cout<< "  ";
//         }
//         for(char name = 'A'; name<='A'+i-1;++name){
//             cout<< name << " ";
//         }
//         cout<< "\n";
//     }
// }
// output :- 
//         A 
//       A B
//     A B C
//   A B C D
// A B C D E

// #include <iostream>
// using namespace std; 
// int main(){
//     int n; 
//     cout<< "Enter number of rows :- "; 
//     cin>> n; 
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 1;j<=n-i; j++){
//             cout<< "  ";
//         }
//         for(int j = 1; j<=i+1; j++){
//             cout<<  << " ";
//         }
//         cout<< "\n";
//     }
// }
// output :- 
//          1
//        2 1
//      3 2 1
//    4 3 2 1 
//  5 4 3 2 1 

// #include <iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<< "Enter number of rows :- "; 
//     cin>> n; 
//      // printing space
//     for(int i = 1; i<= n; i++){
//         for(int j = 1; j<=n-i; j++){
//             cout << "  "; 
//         }
//        // printing stars
//         for(int j = i ; j<=2*i-1; j++){
//             cout << "* "; 
//             cout << "  ";
//         }
//         cout << "\n";
//     }
// }
// output :-
// Enter number of rows :- 5
//         *   
//       *   *
//     *   *   *
//   *   *   *   *
// *   *   *   *   *


// #include <iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<< "Enter number of rows :- "; 
//     cin>> n; 
//      // printing space
//     for(int i = 1; i<= n; i++){
//         for(int j = 1; j<=n-i; j++){
//             cout << "  "; 
//         }
//        // printing increasing numbers
//         for(int j = i ; j<=2*i-1; j++){
//             cout << j << " "; 
//         }
//       // printing decreasing numbers
//         for(int j = 2*i-2 ; j>=i; j--){
//             cout << j << " "; 
//         }
//         cout << "\n";
//     }
// }
// output :-
// Enter number of rows :- 5
//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5


// #include <iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<< "Enter number of rows :- "; 
//     cin>> n; 
//          // printing space 
//     for(int i = 1; i<= n; i++){
//         for(int j = 1; j<=n-i; j++){
//             cout << "  "; 
//         }
//         // printing increasing numbers
//         for(int j = 1 ; j<=i; j++){
//             cout << j << " "; 
//         }
//        // printing decreasing numbers
//         for(int j = i-1 ; j>=1; j--){
//             cout << j << " "; 
//         }
//         cout << "\n";
//     }
// }
// output :-
// Enter number of rows :- 5
//         1 
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1


// #include <iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<< "Enter number of rows :- "; 
//     cin>> n; 
//          // printing space 
//     for(int i = 1; i<= n; i++){
//         for(int j = 1; j<=n-i; j++){
//             cout << "  "; 
//         }
//         // printing decreasing numbers
//         for(int j = i ; j>=1; j--){
//             cout << j << " "; 
//         }
//        // printing increasing numbers
//         for(int j = 2 ; j<=i; j++){
//             cout << j << " "; 
//         }
//         cout << "\n";
//     }
// }
// output :-
// Enter number of rows :- 5
//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5


// #include <iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<< "Enter number of rows :- "; 
//     cin>> n; 
//     for(int i = n; i>=1; i--){
//         for(int j = 1;j<=n-i; j++){
//             cout<< "  ";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             cout<< "* ";
            
//         }
//            cout<< "\n";
//     }
// }
// output :-
// Enter number of rows :- 5
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

