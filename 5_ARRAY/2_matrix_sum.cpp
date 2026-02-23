// add two matrix 
#include <iostream>
using namespace std; 
int main(){
    int rows,cols,i,j;
    cout<< "Enter the rows and columns :- "; 
    cin >> rows >> cols ; 
    int matrix1[rows][cols], matrix2[rows][cols], summatrix[rows][cols]; 
    
    cout<< "Enter elements for the matrix 1 :\n"; 
    for(int i = 0; i<rows ; i++){
        for(j=0;j<cols;j++){
            cout<< "Enter element " << i+1 << j+1<< ":-" ;
            cin>> matrix1[i][j];
        }
    }
    cout<< "Enter elements for matrix 2  \n"; 
    for(int i = 0 ; i<rows; i++){
        for(int j = 0 ; j<cols; j++){
            cout<< "Enter element " << i+1 << j+1<< ":-" ;
            cin>> matrix2[i][j];
        }
    }
     
    for(int i = 0; i<rows ; i++){
        for(int j = 0; j<cols; j++){
            summatrix[i][j] = matrix1[i][j] + matrix2[i][j]; 
        }
    }
    cout<< "Sum of the matrix 1 and matrix 2 is :- \n";
    for(int i = 0 ; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cout<< summatrix[i][j] << "\t";
        }
        cout<< "\n";
    }
}