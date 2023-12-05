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
    std::chrono::system_clock::time_point created_at;
    std::chrono::system_clock::time_point updated_at;

public:
    Account(int id, const std::string& account_id,std::string& password,const std::string& reg_date, const std::string& upd_date);


};
#endif //CLASS_TEST_ACCOUNT_H
