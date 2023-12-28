// Write a Tower of Hanoi game code that allows the user to input the "total number of discs", 
// lists all moving processes and displays the status of the three towers.

#include <iostream>
#include <vector>

// Function to perform Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        std::cout << "Move disc 1 from " << source << " to " << destination << std::endl;
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    std::cout << "Move disc " << n << " from " << source << " to " << destination << std::endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

// Function to display the status of towers
void displayTowers(const std::vector<int>& towerA, const std::vector<int>& towerB, const std::vector<int>& towerC) {
    std::cout << "Tower A: ";
    for (int disc : towerA) {
        std::cout << disc << " ";
    }
    std::cout << std::endl;

    std::cout << "Tower B: ";
    for (int disc : towerB) {
        std::cout << disc << " ";
    }
    std::cout << std::endl;

    std::cout << "Tower C: ";
    for (int disc : towerC) {
        std::cout << disc << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numDiscs;

    // Get the total number of discs from the user
    std::cout << "Enter the total number of discs: ";
    std::cin >> numDiscs;

    // Initialize Tower A with discs
    std::vector<int> towerA;
    for (int i = numDiscs; i >= 1; --i) {
        towerA.push_back(i);
    }

    std::vector<int> towerB; // Auxiliary tower
    std::vector<int> towerC; // Destination tower

    // Display initial status of towers
    displayTowers(towerA, towerB, towerC);

    // Perform Tower of Hanoi
    towerOfHanoi(numDiscs, 'A', 'B', 'C');

    // Display final status of towers
    displayTowers(towerA, towerB, towerC);

    return 0;
}
