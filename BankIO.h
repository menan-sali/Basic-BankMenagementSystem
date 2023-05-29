// BankIO.h

#ifndef BANKIO_H
#define BANKIO_H

#include "BankAccount.h"
#include "AccountInfo.h"

// Class responsible for handling bank account input and output
class BankIO {
public:
    BankIO();

    // Create a new bank account
    void createAccount();

    // Log in to an existing bank account
    void login();

    // Print the account information
    void printAccountInfo() const;

    // Deposit money into the account
    void deposit();

    // Withdraw money from the account
    void withdraw();

    // Display the current balance of the account
    void showBalance() const;

    // Display the transaction history of the account
    void showTransactionHistory() const;

    // Modify the account details
    void modifyAccount();

    // Display the menu options
    void showMenu() const;

    // Execute the selected menu option
    void executeOption(int option);

private:
    BankAccount account; // Bank account object
    AccountInfo account_info; // Account information object

    // Helper function to clear the input buffer
    void clearInputBuffer() const;

    // Helper function to get an integer input from the user
    int getInputInt() const;
};

#endif  // BANKIO_H
