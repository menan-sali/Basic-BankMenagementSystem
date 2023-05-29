#include "BankIO.h"
#include <iostream>
#include <limits>

BankIO::BankIO() {}

void BankIO::createAccount() {
    std::cout << "*** Create a New Bank Account ***" << std::endl;

    std::cout << "Enter First Name: ";
    std::cin >> account_info.person.first_name;  // Read and store the first name

    std::cout << "Enter Last Name: ";
    std::cin >> account_info.person.last_name;  // Read and store the last name

    std::cout << "Enter Gender: ";
    std::cin >> account_info.person.gender;  // Read and store the gender

    std::cout << "Enter Date of Birth: ";
    std::cin >> account_info.person.date_of_birth;  // Read and store the date of birth

    std::cout << "Enter Nationality: ";
    std::cin >> account_info.person.nationality;  // Read and store the nationality

    std::cout << "Enter Personal Number: ";
    account_info.security.personal_no = getInputInt();  // Read and store the personal number

    std::cout << "Enter PIN: ";
    account_info.security.pin = getInputInt();  // Read and store the PIN

    std::cout << "*** Account Created Successfully ***" << std::endl;
}

void BankIO::login() {
    std::cout << "*** Account Login ***" << std::endl;

    std::cout << "Enter Personal Number: ";
    int personal_no = getInputInt();  // Read the personal number for login

    std::cout << "Enter PIN: ";
    int pin = getInputInt();  // Read the PIN for login

    // Check if personal number and PIN match the account information
    if (personal_no == account_info.security.personal_no && pin == account_info.security.pin) {
        std::cout << "Login successful. Welcome, " << account_info.person.first_name << "!"
            << std::endl;
    }
    else {
        std::cout << "Login failed. Invalid personal number or PIN." << std::endl;
    }
}

void BankIO::printAccountInfo() const {
    std::cout << "*** Account Information ***" << std::endl;
    std::cout << account_info.person.printInfo();  // Print the account holder's information
    std::cout << "Personal Number: " << account_info.security.personal_no << std::endl;  // Print the personal number
    std::cout << "PIN: " << account_info.security.pin << std::endl;  // Print the PIN
    std::cout << "Account Number: " << account.getAccountNumber() << std::endl;  // Print the account number
    std::cout << "Balance: " << account.getBalance() << std::endl;  // Print the account balance
    std::cout << "Transaction History:\n" << account.getTransactionHistory() << std::endl;  // Print the transaction history
}

void BankIO::deposit() {
    std::cout << "*** Deposit Money ***" << std::endl;

    std::cout << "Enter Deposit Amount: ";
    int amount = getInputInt();  // Read the deposit amount

    account.deposit(amount);  // Perform the deposit operation
}

void BankIO::withdraw() {
    std::cout << "*** Withdraw Money ***" << std::endl;

    std::cout << "Enter Withdrawal Amount: ";
    int amount = getInputInt();  // Read the withdrawal amount

    account.withdraw(amount);  // Perform the withdrawal operation
}

void BankIO::showBalance() const {
    std::cout << "Current Balance: " << account.getBalance() << "$" << std::endl;  // Print the current account balance
}

void BankIO::showTransactionHistory() const {
    std::cout << "Transaction History:\n" << account.getTransactionHistory() << std::endl;  // Print the transaction history
}

void BankIO::modifyAccount() {
    std::cout << "*** Modify Account Holder Name ***" << std::endl;
    std::cout << "Enter new account holder name: ";
    std::cin.ignore();
    std::getline(std::cin, account_info.person.first_name);  // Read and update the account holder's name
    std::cout << "Account holder name successfully modified to: " << account_info.person.first_name << std::endl;
}

void BankIO::showMenu() const {
    std::cout << "*** Bank Account Menu ***" << std::endl;
    std::cout << "1. Create a New Bank Account" << std::endl;
    std::cout << "2. Login" << std::endl;
    std::cout << "3. Print Account Information" << std::endl;
    std::cout << "4. Deposit Money" << std::endl;
    std::cout << "5. Withdraw Money" << std::endl;
    std::cout << "6. Show Account Balance" << std::endl;
    std::cout << "7. Show Transaction History" << std::endl;
    std::cout << "8. Modify Account Holder Name" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Enter Option: ";
}

void BankIO::executeOption(int option) {
    switch (option) {
    case 1:
        createAccount();  // Execute the createAccount() function
        break;
    case 2:
        login();  // Execute the login() function
        break;
    case 3:
        printAccountInfo();  // Execute the printAccountInfo() function
        break;
    case 4:
        deposit();  // Execute the deposit() function
        break;
    case 5:
        withdraw();  // Execute the withdraw() function
        break;
    case 6:
        showBalance();  // Execute the showBalance() function
        break;
    case 7:
        showTransactionHistory();  // Execute the showTransactionHistory() function
        break;
    case 8:
        modifyAccount();  // Execute the modifyAccount() function
        break;
    case 0:
        std::cout << "Exiting..." << std::endl;  // Print the exit message
        break;
    default:
        std::cout << "Invalid option. Please try again." << std::endl;  // Print the error message for an invalid option
        break;
    }
}

void BankIO::clearInputBuffer() const {
    std::cin.clear();  // Clear the error state of the input stream
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard any remaining characters in the input buffer
}

int BankIO::getInputInt() const {
    int value;
    while (!(std::cin >> value)) {
        clearInputBuffer();  // Clear the input buffer in case of invalid input
        std::cout << "Invalid input. Please enter a valid integer: ";
    }
    clearInputBuffer();  // Clear the input buffer after successfully reading the integer
    return value;  // Return the valid input value
}
