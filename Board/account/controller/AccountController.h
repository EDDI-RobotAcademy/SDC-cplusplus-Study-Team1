//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_ACCOUNTCONTROLLER_H
#define CLASS_TEST_ACCOUNTCONTROLLER_H


#include <memory>
#include <vector>

#include "../service/AccountService.h"

class AccountController {
private:
    std::shared_ptr<AccountService> accountService;
    //BoardService* boardService;

public:
    AccountController(std::shared_ptr<AccountService> accountService);
    //explicit BoardController(BoardService* service) : boardService(service) { }

    std::vector<AccountResponse> accountreg();
    std::vector<AccountResponse> accountlogin();

};


#endif //CLASS_TEST_ACCOUNTCONTROLLER_H
