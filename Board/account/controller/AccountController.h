//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_ACCOUNTCONTROLLER_H
#define CLASS_TEST_ACCOUNTCONTROLLER_H


#include <memory>
#include <vector>

#include "../service/AccountService.h"
#include "request_form/AccountLoginRequestForm.h"
#include "response_form/AccountLoginResponseForm.h"

class AccountController {
private:
    std::shared_ptr<AccountService> accountService;

public:
    AccountController(std::shared_ptr<AccountService> accountService);

    std::vector<AccountResponse> accountreg();
    AccountLoginResponseForm *accountlogin(AccountLoginRequestForm *requestForm);

    static AccountController& getInstance(std::shared_ptr<AccountService> accountService);
    static AccountController& getInstance();
};


#endif //CLASS_TEST_ACCOUNTCONTROLLER_H
