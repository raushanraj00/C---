// calculate the sum upto n numbers
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<< "Enter end term:- ";
    cin>> n;
    for(int i = 0; i<=n ; i++){
        sum = sum+i;
    }
    cout<< "Sum is :" << sum <<endl;
}
