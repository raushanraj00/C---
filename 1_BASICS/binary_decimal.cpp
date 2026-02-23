// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<< "Enter a decimal number :- ";
//     cin>> num;
//     int rem=0,ans=0,mul=1;
//     while(num>0){
//         rem=num%2;
//         ans=ans+rem*mul;
//         mul=mul*10;
//         num=num/2;
//     }
//     cout<<"Binary equivalent is "<<ans<<"\n";
// }
// output :-
// Enter a decimal number :- 10
// Binary equivalent is 1010




// #include <iostream>
// using namespace std;
// int main(){
//     int num; 
//     cout<< "Enter a binary Number :- "; 
//     cin>> num; 
//     int rem = 0, ans = 0,mul = 1; 
//     while(num>0){
//         rem = num%10 ;
//         ans = ans + mul*rem; 
//         mul = mul*2; 
//         num = num/10;
//     }
//     cout << "Decimal equivalent is " << ans << "\n";
// }
// output :-
// Enter a binary Number :- 1010
// Decimal equivalent is 10