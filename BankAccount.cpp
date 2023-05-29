#include "BankAccount.h"
#include <iostream>

// Default constructor
BankAccount::BankAccount() : account_number(0), balance(0) {}

// Deposit money into the account
void BankAccount::deposit(int amount) {
    balance += amount;
    transactions += "Deposited: $" + std::to_string(amount) + "\n";
    std::cout << "You successfully deposited " << amount << "$ into your account." << std::endl;
}

// Withdraw money from the account
bool BankAccount::withdraw(int amount) {
    if (balance >= amount) {
        balance -= amount;
        transactions += "Withdrawn: $" + std::to_string(amount) + "\n";
        std::cout << "You successfully withdrew " << amount << "$ from your account." << std::endl;
        return true;
    }
    else {
        std::cout << "Insufficient balance to withdraw " << amount << "$." << std::endl;
        return false;
    }
}

// Get the current balance of the account
int BankAccount::getBalance() const {
    return balance;
}

// Get the account number
int BankAccount::getAccountNumber() const {
    return account_number;
}

// Get the transaction history of the account
std::string BankAccount::getTransactionHistory() const {
    return transactions;
}

// Modify the account details
void BankAccount::modifyAccount() {
    std::string new_name;
    std::cout << "Enter new account holder name: ";
    std::cin.ignore();
    std::getline(std::cin, new_name);
    std::cout << "Account holder name successfully modified to: " << new_name << std::endl;
}
