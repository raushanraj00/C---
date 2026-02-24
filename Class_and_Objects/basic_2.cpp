#include <iostream> 
using namespace std; 
class Book{
    public: 
    string titlename; 
    string authorname; 
    int year; 
    
};
int main(){
    Book b1,b2; 
    b1.titlename = "Programming Practice"; 
    b1.authorname = "Rohit LALALALALA"; 
    b1.year = 1578; 
    
    b2.titlename = "DSA"; 
    b2.authorname = "Raushan Rajjj"; 
    b2.year = 1999; 
    
     cout << "Book 1 Details:"<<endl;
    cout << "Title: " << b1.titlename << endl;
    cout << "Author: " << b1.authorname << endl;
    cout << "Year: " << b1.year << endl;

    cout << "\nBook 2 Details:" << endl;
    cout << "Title: " << b2.titlename << endl;
    cout << "Author: " << b2.authorname << endl;
    cout << "Year: " << b2.year << endl;
}