// #include <iostream> 
// using namespace std; 
// int main(){
//     int n,x; 
//     cout<< "Enter Size :- "; 
//     cin>> n; 
//     int arr[1000]; 
//     int lb = -1, ub = -1; 
//     cout<< "Enter Array Elements :- "; 
//     for(int i =0; i<n; i++){
//         cin>> arr[i]; 
//     }
//     cout<< "Enter element to find :- "; 
//     cin>> x; 
//     int count = 0; 
//     for(int i = 0; i<n; i++ ){
//         if(arr[i] == x ){
//             if(lb == -1){ lb = i;} 
//             ub = i; 
//             count++; 
//         }
//     }
//     if(lb==-1) cout<< "Element not found ";
//     else {
//     cout<< "Lower Bound Will be :- " << arr[lb] << endl; 
//     cout<< "Upper Bound will be :- " << arr[ub] << endl; 
//     cout<< "Frequency of the element :- " << count ; 
//     }
// }

#include <iostream> 
using namespace std; 
void pq(int arr[],int n, int target){
    int i = 0;
    int lb = -1, ub = -1; 
    int count = 0; 
    for(int i =0; i<n; i++){
        if(arr[i]==target){
            if(lb==-1){
                lb = i; 
            };
            ub = i; 
            count++; 
        }
    }
    cout<< "LB = " << lb<< endl; 
    cout<< "UB = " << ub << endl; 
    cout<< "No. of Occurance is:- " << count<< endl; 
}
int main()
{
    
    int n ;
    int key; 
    cin>> n; 
   int arr[100]; 
    
    for(int i = 0; i<n ; i++){
        cin>> arr[i]; 
    }
    cin>> key; 
    pq(arr,n, key); 
    return 0; 
}
