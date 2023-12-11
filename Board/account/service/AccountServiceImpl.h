//
// Created by eddi on 23. 11. 30.
//

#ifndef CLASS_TEST_ACCOUNTSERVICEIMPL_H
#define CLASS_TEST_ACCOUNTSERVICEIMPL_H


#include <vector>
#include <memory>

#include "AccountService.h"
#include "../repository/AccountRepository.h"
#include "response/AccountLoginResponse.h"
#include "response/AccountRegisterResponse.h"
#include "request/AccountRegisterRequest.h"

class AccountServiceImpl : public AccountService {
private:
    std::shared_ptr<AccountRepository> accountRepository;

public:
    AccountServiceImpl(std::shared_ptr<AccountRepository> accountRepository);
    AccountRegisterResponse *acregister(AccountRegisterRequest *request) override;
    AccountLoginResponse *aclogin(AccountLoginRequest *request) override;
};


#endif //CLASS_TEST_ACCOUNTSERVICEIMPL_H
