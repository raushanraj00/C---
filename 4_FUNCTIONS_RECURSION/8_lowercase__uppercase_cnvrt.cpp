// CONVERT LOWERCASE TO UPPER CASE 
#include <iostream>
using namespace std;
char up_and_low(char ch){
    if(ch>='a' && ch<='z'){
    ch = ch-32;
    cout << "Uppercase :- " << ch;
} else if (ch>='A' && ch<='Z'){
    ch = ch+32;
    cout<< "Lowercase :- " << ch;
} else cout<< "Not an Alphabet";
return 0;
}
int main(){
    char ch;
    cout<< "Enter Alphabet:-";
    cin>> ch;
    cout<< up_and_low(ch);
}