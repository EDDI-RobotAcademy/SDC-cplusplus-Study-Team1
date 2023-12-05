#include "Account.h"

//
// Created by eddi on 23. 12. 4.
//
Account::Account(int id, const std::string& account_id,std::string& password,const std::string& reg_date, const std::string& upd_date)
        : id(id),
          account_id(account_id),
          password(password),
          created_at(std::chrono::system_clock::now()),
          updated_at(created_at) { }