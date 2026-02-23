// FINDING AREA AND PERIMETER OF CIRCLE AND RECTANGLE :-
#include <iostream>
using namespace std;
int main(){
    float r,l,b;
    cout << "Enter Radius for circle :- ";
    cin>> r;

    cout<< "Enter Length and Breadth for rectangle :- ";
    cin>> l >> b;

    cout<< "Area of the circle is :- " << (3.14)*r*r <<endl;
    cout<< "Perimeter of circle is :- " << 2*(3.14)*r << endl;
    cout<< "Area of Rectangle is :- " << l*b << endl;
    cout<< "Perimeter of Rectangle is :- " << 2*(l+b) << endl;
    cout<< "Value of a and b are :- " << l << ", " <<  b << endl;
}