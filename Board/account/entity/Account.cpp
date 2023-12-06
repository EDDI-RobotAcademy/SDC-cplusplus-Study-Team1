

//
// Created by eddi on 23. 12. 4.
//
#include "Account.h"

Account::Account(int id, const std::string& account_id,std::string& password)
        : id(id),
          account_id(account_id),
          password(password),
          created_at(std::chrono::system_clock::now()),
          updated_at(created_at) { }


Account::Account(int id, const std::string& account_id, const std::string& password,
             const std::string& reg_date, const std::string& upd_date)
        : id(id),
          password(password),
          account_id(account_id){
    // reg_date, upd_date를 이용하여 시간 설정 (형식에 따라 변경이 필요할 수 있음)
    created_at = std::chrono::system_clock::from_time_t(std::stoi(reg_date));
    updated_at = upd_date.empty() ? created_at : std::chrono::system_clock::from_time_t(std::stoi(upd_date));
}

void Account::printAccountInfo() const {
    std::cout << "ID: " << id
              << ", account_id: " << account_id
              << ", password: " << password
              << ", Created At: " << std::chrono::system_clock::to_time_t(created_at)
              << ", Updated At: " << std::chrono::system_clock::to_time_t(updated_at) << std::endl;
}