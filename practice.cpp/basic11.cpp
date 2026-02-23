#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
       vector <int> v; 
       int n,x; 
       cin>> n; 
       for(int i=0; i<n; i++){
        cin>> x; 
        v.push_back(x); 
       }
       v.erase(v.begin()+1,v.begin()+3);
       cout<< v.size() << endl; 
       for(int val: v){
        
        cout<< val << " ";
       }
    return 0;
}
