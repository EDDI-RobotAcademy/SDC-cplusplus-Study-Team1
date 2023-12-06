//
// Created by eddi on 23. 11. 30.
//

#ifndef CLASS_TEST_ACCOUNTREPOSITORY_H
#define CLASS_TEST_ACCOUNTREPOSITORY_H

#include <vector>
#include "../entity/Account.h"

class AccountRepository {
    std::string id;
    std::string pw;
public:
    virtual ~AccountRepository() = default;
    virtual std::vector<Account> regsave() = 0;
    virtual std::vector<Account> loginsave() = 0;
};


#endif //CLASS_TEST_ACCOUNTREPOSITORY_H