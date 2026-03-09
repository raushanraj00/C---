#include <iostream> 
using namespace std; 
class calculator{
    public : 
    int add(int x , int y){
        return x+y; 
    }
    int add(int x,int y , int z){
        return x+y+z; 
    }
};
int main(){
    calculator cal; 
    cout<< "Adding two numbers " << cal.add(5,8) << endl; 
    cout<< "Adding three Numbers " << cal.add(3,6,8)  << endl; 
    return 0; 
}