#include <iostream>

#include "models/Account.h"
#include "models/BankService.h"
#include "models/ATM.h"

int main() {

    Account account("A101", "C101", 10000);

    BankService bankService;

    ATM atm(bankService);

    atm.withdrawCash(account, 2000, "2026-11-13 14:30:00");

    std::cout << "Remaining Balance: "
              << atm.displayBalance(account) << std::endl;

    return 0;
}