

//
// Created by eddi on 23. 12. 4.
//
#include "Account.h"
Account::Account() {}

Account::Account(const std::string& account_id, const std::string& password)
        : account_id(account_id),
          password(password){ }


Account::Account(int id, const std::string& account_id, const std::string& password)
        : id(id),
          password(password),
          account_id(account_id){
    // reg_date, upd_date를 이용하여 시간 설정 (형식에 따라 변경이 필요할 수 있음)
    //created_at = std::chrono::system_clock::from_time_t(std::stoi(reg_date));
    //updated_at = upd_date.empty() ? created_at : std::chrono::system_clock::from_time_t(std::stoi(upd_date));
}

void Account::printAccountInfo() const {
    std::cout << "ID: " << id
              << ", account_id: " << account_id
              << ", password: " << password << std::endl;

}

std::string Account:: getAccountId()
{
    return account_id;
}
std::string Account:: get_password()
{
    return password;
}