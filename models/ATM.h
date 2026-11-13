
#ifndef ATM_H
#define ATM_H

#include <string>

#include "Account.h"
#include "BankService.h"

class ATM {

private:
    BankService& bankService;

public:

    // Constructor injection
    ATM(BankService& service)
        : bankService(service) {
    }

    // Withdraw money
    bool withdrawCash(Account& account,
                      double amount,
                      std::string timestamp) {

        return bankService.withdraw(account, amount, timestamp);
    }

    // Deposit money
    bool depositCash(Account& account,
                     double amount,
                     std::string timestamp) {

        return bankService.deposit(account, amount, timestamp);
    }

    // Check balance
    double displayBalance(const Account& account) const {

        return bankService.checkBalance(account);
    }
};

#endif
