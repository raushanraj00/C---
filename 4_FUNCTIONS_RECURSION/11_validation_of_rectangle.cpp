// WA function to check the validation of forming a rectangle. 
#include <iostream>
using namespace std; 
bool validrectangle(int a,int b, int c, int d){
    if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
    return 1; 
    else return 0; 
}
int main(){
    int a,b,c,d; 
    cout<< "ENter parameters for rectangle :- ";
    cin >> a>>b>>c>>d; 
    validrectangle(a,b,c,d);
    cout<< validrectangle(a,b,c,d);
}