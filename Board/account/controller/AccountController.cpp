//
// Created by eddi on 23. 12. 4.
//

#include "AccountController.h"

#include <iostream>
#include <vector>

AccountController::AccountController(std::shared_ptr<AccountService> accountService) : accountService(accountService) { }

std::vector<AccountResponse> AccountController::accountlist()
{
    std::cout << "AccountController: 게시물 리스트 출력!" << std::endl;

    accountService->accountlist();

    return std::vector<AccountResponse>();
}