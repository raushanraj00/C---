// FINDING SIMPLE INTEREST USING C++ ========================
#include <iostream>
using namespace std;
int main(){
  int p,r,t;
  cout<< "Enter Principle Amount :-" ;
  cin>> p;
  cout<< "Enter Rate :- " ;
  cin>> r;
  cout<< "Enter time :- ";
  cin>> t;
  float g;
  g = (p*r*t)/100.0;
  cout<< "Simple Interest is :- " << g << endl;
}