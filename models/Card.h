#ifndef CARD_H
#define CARD_H
#include<string>
class Card{
    private:
    std::string cardNumber;
    std:: string expiryDate;
    std:: string pinhash;
    bool active;
    std:: string accountNumber;
    public:
    Card(std:: string cardno,std:: string expiry,
    std:: string hash,std:: string accno){
        cardNumber=cardno;
        expiryDate=expiry;
        pinhash=hash;
        active=true;
        accountNumber=accno;
    };
    // get card number 
    std:: string getCardNumber() const{
        return cardNumber;
    }

    // get linked account number 
    std:: string getAccountNumber() const {
        return accountNumber;
    }
    // check whether card is active 
    bool isActive() const{
        return active;
    }
    void blockCard(){
        active =false;
    }

};
#endif

