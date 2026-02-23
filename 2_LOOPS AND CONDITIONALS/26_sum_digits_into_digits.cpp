#include <iostream> 
using namespace std; 
int main(){
    int num; 
    cout<< "Enter Number :- "; 
    cin>> num; 
    while(num>9){
            int sum=0,ldigit;
        while(num>0){
            ldigit = num%10;
            num/=10;
            sum+=ldigit;
        }
        num = sum;
        }
    cout<< num;
}