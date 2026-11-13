
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {

private:
    std::string customerId;
    std::string name;
    std::string email;
    std::string phoneNumber;

public:

    // Constructor
    Customer(std::string id, std::string customerName,
             std::string customerEmail, std::string phone)
        : customerId(id),
          name(customerName),
          email(customerEmail),
          phoneNumber(phone) {
    }

    // Get customer ID
    std::string getCustomerId() const {
        return customerId;
    }

    // Get customer name
    std::string getName() const {
        return name;
    }

    // Get email
    std::string getEmail() const {
        return email;
    }

    // Get phone number
    std::string getPhoneNumber() const {
        return phoneNumber;
    }
};

#endif
