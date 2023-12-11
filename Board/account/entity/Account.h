//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_ACCOUNT_H
#define CLASS_TEST_ACCOUNT_H
#include <string>
#include <chrono>
#include <iostream>

class Account {
private:
    int id;
    std::string account_id;
    std::string password;


public:
    Account();
    Account(const std::string& account_id, const std::string& password);
    Account(int id, const std::string& account_id, const std::string& password);
    std::string getAccountId();
    std::string get_password();

    void printAccountInfo() const;
};
#endif //CLASS_TEST_ACCOUNT_H
