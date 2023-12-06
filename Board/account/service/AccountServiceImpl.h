//
// Created by eddi on 23. 11. 30.
//

#ifndef CLASS_TEST_ACCOUNTSERVICEIMPL_H
#define CLASS_TEST_ACCOUNTSERVICEIMPL_H


#include <vector>
#include <memory>
#include "response/AccountResponse.h"
#include "AccountService.h"
#include "../repository/AccountRepository.h"

class AccountServiceImpl : public AccountService {
private:
    std::shared_ptr<AccountRepository> accountRepository;

public:
    AccountServiceImpl(std::shared_ptr<AccountRepository> accountRepository);
    std::vector<AccountResponse> accountlist() override;
};


#endif //CLASS_TEST_ACCOUNTSERVICEIMPL_H
