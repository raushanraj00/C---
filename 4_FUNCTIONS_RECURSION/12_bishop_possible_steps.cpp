// WAF to count the total steps that a bishop can take in the chess board ; 
#include <iostream>
using namespace std; 
int bishopstep(int a, int b){
    int total=0; 
    total = min(8-a,8-b) + min(8-a,b-1) + min(a-1,8-b) + min(a-1,b-1);
    return total;
}
int main(){
    int a,b; 
    cout<< "Enter position of bishop :- "; 
    cin>> a>>b; 
    cout<< "Total steps that bishop can walk is " << bishopstep(a,b);
}