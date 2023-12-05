//
// Created by eddi on 23. 12. 4.
//


#ifndef CLASS_TEST_ACCOUNTREPOSITORYIMPL_H
#define CLASS_TEST_ACCOUNTREPOSITORYIMPL_H


#include "AccountRepository.h"

class AccountRepositoryImpl : public AccountRepository {

public:
    std::vector<Account> findAll() override;
};


#endif //CLASS_TEST_ACCOUNTREPOSITORYIMPL_H