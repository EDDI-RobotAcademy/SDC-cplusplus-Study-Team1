//
// Created by eddi on 23. 12. 4.
//

#include "AccountController.h"
#include "request_form/AccountLoginRequestForm.h"
#include "../service/response/AccountLoginResponse.h"
#include "../service/AccountServiceImpl.h"
#include "../repository/AccountRepositoryImpl.h"

#include <iostream>
#include <vector>

AccountController::AccountController(std::shared_ptr<AccountService> accountService) : accountService(accountService) { }

std::vector<AccountResponse> AccountController::accountreg()
{
    std::cout << "AccountController: 회원가입 서비스로 이동!" << std::endl;

    accountService->acregister();

    return std::vector<AccountResponse>();
}


AccountLoginResponseForm *AccountController::accountlogin(AccountLoginRequestForm *requestForm)
{
    std::cout << "AccountController: 로그인 서비스로 이동!" << std::endl;

    AccountLoginResponse *response =
            accountService->aclogin(requestForm->toAccountLoginRequest());

    if (response == nullptr) { return nullptr; }

    return response->toResponseForm();
}

AccountController& AccountController::getInstance(
        std::shared_ptr<AccountService> accountService)
{
    static AccountController instance(accountService);
    return instance;
}

AccountController& AccountController::getInstance() {
    static AccountController instance(
            std::make_shared<AccountServiceImpl>(
                    std::make_shared<AccountRepositoryImpl>()));

    return instance;
}