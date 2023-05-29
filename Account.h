#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
    Account(); // Default constructor

    // Setters and getters for account number
    void setAccountNumber(const std::string& account_number);
    std::string getAccountNumber() const;

    // Setters and getters for balance
    void setBalance(int balance);
    int getBalance() const;

    // Deposit money into the account
    void deposit(int amount);

    // Withdraw money from the account
    bool withdraw(int amount);

    // Get the transaction history
    std::string getTransactionHistory() const;

private:
    std::string account_number; // Account number of the account
    int balance; // Current balance in the account
    std::string transaction_history; // History of transactions
};

#endif  // ACCOUNT_H
