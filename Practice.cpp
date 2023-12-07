#include <iostream>

using namespace std;

// void print(int n){
//     if (n <= 1) {
//         cout << n << endl;
//         return;
//     }
//     else {
//         print(n-1);
//         cout << n << endl;
//     }
// }

// int total(int n){
//     if (n <= 1){
//         return 1;
//     }
//     else 
//     return (n + total(n-1));
// }

// int Fibonacci(int n){
//     // n is index
    
//     if (n == 1){
//         return 0;
//     } 
//     else if (n == 2) {
//         return 1;
//     } 
//     else 
//         return(Fibonacci(n - 2) + Fibonacci(n - 1));
// }

int Factorial(int n){

    if (n == 1 || n == 0 )
        return 1;
    else 
        return (n * Factorial(n - 1));
}


int main(){

    cout << Factorial(5) << endl;
    return 0;
}