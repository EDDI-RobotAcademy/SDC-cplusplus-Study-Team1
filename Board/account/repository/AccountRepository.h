//
// Created by eddi on 23. 11. 30.
//

#ifndef CLASS_TEST_ACCOUNTREPOSITORY_H
#define CLASS_TEST_ACCOUNTREPOSITORY_H

#include <vector>
#include "../entity/Account.h"
#include "../service/request/AccountLoginRequest.h"

class AccountRepository {
    std::string id;
    std::string pw;
public:
    virtual ~AccountRepository() = default;
    virtual Account *registerinfosave(Account *account) = 0;
};


#endif //CLASS_TEST_ACCOUNTREPOSITORY_H