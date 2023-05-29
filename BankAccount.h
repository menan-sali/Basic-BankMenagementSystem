#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

// Class representing a bank account
class BankAccount {
public:
    BankAccount();

    // Deposit money into the account
    void deposit(int amount);

    // Withdraw money from the account
    bool withdraw(int amount);

    // Get the current balance of the account
    int getBalance() const;

    // Get the account number
    int getAccountNumber() const;

    // Get the transaction history of the account
    std::string getTransactionHistory() const;

    // Modify the account details
    void modifyAccount();

private:
    int account_number; // Account number of the bank account
    int balance; // Current balance in the account
    std::string transactions; // Transaction history of the account
};

#endif  // BANKACCOUNT_H
