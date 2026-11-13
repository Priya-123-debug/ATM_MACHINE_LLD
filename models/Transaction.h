
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {

private:
    std::string transactionId;
    std::string accountNumber;
    std::string transactionType;
    double amount;
    std::string timestamp;
    std::string status;

public:

    // Constructor
    Transaction(std::string txnId,
                std::string accNo,
                std::string type,
                double txnAmount,
                std::string time,
                std::string txnStatus)
        : transactionId(txnId),
          accountNumber(accNo),
          transactionType(type),
          amount(txnAmount),
          timestamp(time),
          status(txnStatus) {
    }

    // Get transaction ID
    std::string getTransactionId() const {
        return transactionId;
    }

    // Get account number
    std::string getAccountNumber() const {
        return accountNumber;
    }

    // Get transaction type
    std::string getTransactionType() const {
        return transactionType;
    }

    // Get transaction amount
    double getAmount() const {
        return amount;
    }

    // Get transaction timestamp
    std::string getTimestamp() const {
        return timestamp;
    }

    // Get transaction status
    std::string getStatus() const {
        return status;
    }
};

#endif
