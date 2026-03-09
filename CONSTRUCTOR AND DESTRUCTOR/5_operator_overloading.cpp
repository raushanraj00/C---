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
    // for binary operator overloading 
    data operator+(data d5){
        data temp(0); 
        temp.num1 = num1 + d5.num1; 
        return temp;
    }; 
}; 
int main(){
    data t1(10),t2(10),t3(10), result(0),resultt(0), resulttt(0);
    result = ++t1; 
    result.display(); 
    resultt = --t2;
    resultt.display(); 
    resulttt = -t3; 
    resulttt.display();
    // for binary operator overloading 
    // result = t1 + t2;
    data t4(5),t5(10), resultbinary(0);
    resultbinary = t4 + t5; 
    resultbinary.display();
}