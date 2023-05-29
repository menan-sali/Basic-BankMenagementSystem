// main.cpp

#include "BankIO.h"
#include <iostream>

int main() {
    BankIO bank;

    // Initialize option with a non-zero value to enter the loop
    int option = -1;

    // Loop until the user chooses to exit (option 0)
    while (option != 0) {
        // Display the menu options
        bank.showMenu();

        // Read the user's choice
        std::cin >> option;

        // Execute the chosen option
        bank.executeOption(option);

        // Print a newline for better readability
        std::cout << std::endl;
    }

    return 0;
}
