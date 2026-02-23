// ENTER AND DETERMINE THE CHARACTER IS LOWERCASE , UPPERCASE , OR NUMERIC
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter the character value :- " ;
    cin >> ch;
    if(ch>='a' && ch<='z'){
        cout<< "LOWERCASE character";
    }
    else if(ch>='A' && ch<='B'){
        cout<< "UPPERCASE character";
    }
    else if(ch>='0' && ch<='9'){
        cout<< "Numeric character ";
    }
    else {
        cout<< "Other character values ";
    }
}