//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_ACCOUNTCONTROLLER_H
#define CLASS_TEST_ACCOUNTCONTROLLER_H


#include <memory>
#include <vector>
#include "../service/AccountService.h"
#include "response_form/AccountRegisterResponseForm.h"
#include "request_form/AccountRegisterRequestForm.h"
#include "request_form/AccountLoginRequestForm.h"
#include "response_form/AccountLoginResponseForm.h"

class AccountController {
private:
    std::shared_ptr<AccountService> accountService;
    //BoardService* boardService;

public:
    AccountController(std::shared_ptr<AccountService> accountService);
    AccountRegisterResponseForm *accountRegister(AccountRegisterRequestForm *form);
    AccountLoginResponseForm *accountLogin(AccountLoginRequestForm *form);
    //explicit BoardController(BoardService* service) : boardService(service) { }

    std::vector<AccountResponse> accountreg();
    std::vector<AccountResponse> accountlogin();

};


#endif //CLASS_TEST_ACCOUNTCONTROLLER_H
