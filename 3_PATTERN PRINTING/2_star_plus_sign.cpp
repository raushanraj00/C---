// print star plus sign +  ''
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter (odd) number of terms :- ";
    cin>> n;
    int mid = n/2 + 1;
    for(int i = 1; i<=n ; ++i){
        for(int j =1; j<=n; ++j){
            if(i == mid || j == mid){
                cout<< "* ";
            } else {
                cout << "  ";
            }
        }
    cout<< "\n";
    }
}