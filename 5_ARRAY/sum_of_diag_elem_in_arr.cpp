// to sum diagonal elements in an array ! 
#include <iostream> 
using namespace std; 
int main(){
    int n; 
    cout<< "Enter Rows and cols :- "; 
    cin>> n; 
    int arr[n][n];
    int sum = 0; 
    cout<< "Enter Elements for Matrix :- "; 
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cin>> arr[i][j]; 
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0 ; j<n; j++){
            if(i==j){
                sum+= arr[i][i];
            }
        }
    }
    cout<< "Trace of matrix is :- " << sum << endl; 
}