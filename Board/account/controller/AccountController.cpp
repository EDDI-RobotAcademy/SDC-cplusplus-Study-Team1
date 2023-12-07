//
// Created by eddi on 23. 12. 4.
//

#include "AccountController.h"

#include <iostream>
#include <vector>

AccountController::AccountController(std::shared_ptr<AccountService> accountService) : accountService(accountService) { }

std::vector<AccountResponse> AccountController::accountreg()
{
    std::cout << "AccountController: 회원가입 서비스로 이동!" << std::endl;

    accountService->acregister();

    return std::vector<AccountResponse>();
}
std::vector<AccountResponse> AccountController::accountlogin()
{
    std::cout << "AccountController: 로그인 서비스로 이동!" << std::endl;

    accountService->aclogin();

    return std::vector<AccountResponse>();
}