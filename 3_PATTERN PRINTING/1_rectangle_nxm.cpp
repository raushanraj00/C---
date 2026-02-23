//  print rectangle pattern of order n x m ;
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<< "Enter rows and columns for pattern :- ";
    cin>> n >> m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= m; j++){
            cout << "* ";
        }
        cout<< "\n";
    }
}