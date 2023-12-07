// Please use the Tower of Hanoi code to allow the user to input "the total number of disks n" 
// and calculate how many times each disk has been moved (the maximum number of disks cannot exceed 100)?

#include <iostream>

using namespace std;


void Hanoi(int n, char from_rod, char to_rod, char aux_rod){
// if there is a void return type in the function definition, 
// then there will be no return statement inside that function
// This syntax is used in function just as a jump statement in order to break the flow of the function and jump out of it. 
// One can think of it as an alternative to “break statement” to use in functions.
    if (n == 0)
        return;
    // Move n-1 disks from the from_rod to the aux_rod, using the to_rod as the auxiliary rod.
    Hanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "plate " << n << " from " << from_rod << " -> " << to_rod << endl;
    // Move n-1 disks from the aux_rod to the to_rod, using the from_rod as the auxiliary rod.
    Hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main(){

    int n = 3;
    // cin >> n;
    
    Hanoi(n,'A','C','B');
    
    return 0;
}
