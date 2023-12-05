//
// Created by eddi on 23. 11. 30.
//

#ifndef CLASS_TEST_ACCOUNTREPOSITORY_H
#define CLASS_TEST_ACCOUNTREPOSITORY_H

#include <vector>
#include "../entity/Account.h"

class AccountRepository {
public:
    virtual ~AccountRepository() = default;
    virtual std::vector<Account> findAll() = 0;
};

#endif //CLASS_TEST_ACCOUNTREPOSITORY_H