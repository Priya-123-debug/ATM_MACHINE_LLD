
#ifndef BANK_SERVICE_H
#define BANK_SERVICE_H

#include <iostream>
#include <string>
#include <vector>

#include "Account.h"
#include "Transaction.h"

class BankService {

private:
    std::vector<Transaction> transactions;
    int transactionCounter = 1;

public:

    // Withdraw money
    bool withdraw(Account& account, double amount,
                  std::string timestamp) {

        bool success = account.withdraw(amount);

        std::string status = success ? "SUCCESS" : "FAILED";

        Transaction txn(
            "T" + std::to_string(transactionCounter++),
            account.getAccountNumber(),
            "WITHDRAWAL",
            amount,
            timestamp,
            status
        );

        transactions.push_back(txn);

        return success;
    }

    // Deposit money
    bool deposit(Account& account, double amount,
                 std::string timestamp) {

        if (amount <= 0) {
            return false;
        }

        account.deposit(amount);

        Transaction txn(
            "T" + std::to_string(transactionCounter++),
            account.getAccountNumber(),
            "DEPOSIT",
            amount,
            timestamp,
            "SUCCESS"
        );

        transactions.push_back(txn);

        return true;
    }

    // Check account balance
    double checkBalance(const Account& account) const {
        return account.getBalance();
    }

    // Get transaction history
    const std::vector<Transaction>& getTransactionHistory() const {
        return transactions;
    }
};

#endif
