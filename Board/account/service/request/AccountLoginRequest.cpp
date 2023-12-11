//
// Created by eddi on 23. 12. 11.
//

#include "AccountLoginRequest.h"
#include "iostream"
#include "../../entity/Account.h"


AccountLoginRequest::AccountLoginRequest(
        const std::string& account_id, const std::string& password) :
        account_id(account_id), password(password) { }

Account *AccountLoginRequest::toAccount()
{
    return new Account(account_id, password);
}

std::string AccountLoginRequest::getAccountId() const {
    return account_id;
}

std::string AccountLoginRequest::getPassword() const {
    return password;
}