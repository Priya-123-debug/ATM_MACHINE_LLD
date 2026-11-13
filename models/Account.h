
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {

private:
    std::string accountNumber;
    std::string customerId;
    double balance;

public:

    // Constructor
    Account(std::string accNo, std::string custId, double initialBalance)
        : accountNumber(accNo),
          customerId(custId),
          balance(initialBalance >= 0 ? initialBalance : 0) {
    }

    // Get account number
    std::string getAccountNumber() const {
        return accountNumber;
    }

    // Get customer ID
    std::string getCustomerId() const {
        return customerId;
    }

    // Get current balance
    double getBalance() const {
        return balance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount <= 0) {
            return;
        }

        balance += amount;
    }

    // Withdraw money
    bool withdraw(double amount) {
        if (amount <= 0 || balance < amount) {
            return false;
        }

        balance -= amount;
        return true;
    }
};

#endif
