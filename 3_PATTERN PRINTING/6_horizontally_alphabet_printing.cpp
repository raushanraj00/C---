// print Horizontally increasing alphabet square ; 
#include <iostream>
using namespace std; 
int main(){
    int n; 
    cout<< "Enter rows and columns :- "; 
    cin >> n; 
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= n; j++){
            char c = (char)(j+64);
            cout<< c << " "; 
        }
        cout<< "\n";
    }
    return 0;
}