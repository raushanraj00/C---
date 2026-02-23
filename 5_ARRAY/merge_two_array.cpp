#include <iostream> 
using namespace std; 
int main(){
    int a1[5] = {1,4,5,8,9}; 
    int a2[6] = {3,4,6,7,8,9}; 
    int a3[11]; 
    int i = 0,j=0,k=0;
    while (i<5 &&  j<6 ){
        if(a1[i]<a2[j]){
            a3[k++] = a1[i++];  
        } else {
            a3[k++] = a2[j++]; 
        }
    }
    while (i<5 || j < 6 ){
        if(i<5)
        a3[k++] = a1[i++]; 
        else if(j<6)
        a3[k++] = a2[j++]; 
    }
    cout<< "Merged Array is :- "; 
    for(int x = 0; x<11; x++){
        cout<< a3[x] << " "; 
    }
}
