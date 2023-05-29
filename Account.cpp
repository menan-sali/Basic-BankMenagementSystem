#include "Account.h"

// Default constructor
Account::Account() : balance(0) {}

// Set the account number
void Account::setAccountNumber(const std::string& account_number) {
    this->account_number = account_number;
}

// Get the account number
std::string Account::getAccountNumber() const {
    return account_number;
}

// Set the balance
void Account::setBalance(int balance) {
    this->balance = balance;
}

// Get the balance
int Account::getBalance() const {
    return balance;
}

// Deposit money into the account
void Account::deposit(int amount) {
    if (amount > 0) {
        balance += amount;
        transaction_history += "Deposit: +" + std::to_string(amount) + "\n";
    }
}

// Withdraw money from the account
bool Account::withdraw(int amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        transaction_history += "Withdrawal: -" + std::to_string(amount) + "\n";
        return true;
    }
    return false;
}

// Get the transaction history
std::string Account::getTransactionHistory() const {
    return transaction_history;
}
