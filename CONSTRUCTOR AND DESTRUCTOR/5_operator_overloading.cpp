#include <iostream> 
using namespace std; 
class data{
    public : 
    int num1; 
    data(int n){
        num1  = n ; 
    }
    // URNARY OPERATOR OVERLOADING
    data operator++(){
        num1 = ++num1; 
        return num1;
    }
    data operator--(){
        num1 = --num1; 
        return num1;
    }
    data operator-(){
        num1 = -num1; 
        return num1;
    }
    void display(){
        cout<< "Value = " << num1 << endl; 
    }
}; 
int main(){
    data t1(10),t2(10),t3(10), result(0),resultt(0), resulttt(0);
    result = ++t1; 
    result.display(); 
    resultt = --t2;
    resultt.display(); 
    resulttt = -t3; 
    resulttt.display();
}