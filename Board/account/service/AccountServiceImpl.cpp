//
// Created by eddi on 23. 11. 30.
//

#include "AccountServiceImpl.h"
#include "../../mysql/DbProcess.h"
#include "response/AccountLoginResponse.h"
#include <iostream>

AccountServiceImpl::AccountServiceImpl(std::shared_ptr<AccountRepository> accountRepository) : accountRepository(accountRepository) { }

std::vector<AccountResponse> AccountServiceImpl::acregister()
{
    std::cout << "어카운트서비스임플 회원가입 " << std::endl;

    accountRepository->registerinfosave();

    return std::vector<AccountResponse>();
}


AccountLoginResponse *AccountServiceImpl::aclogin(AccountLoginRequest *request)
{
    std::cout << "로그인 시도!" << std::endl;

    DbProcess* dbInstance = DbProcess::getInstance();

    int check_AccountInfo = dbInstance->checkAccount(request->getAccountId(), request->getPassword());
    if(check_AccountInfo == 0){
        std::cout << "로그인 실패" << std::endl;
    }
    else if (check_AccountInfo == 1) {
        std::cout << "로그인 성공" << std::endl;
    }

    return nullptr;
}

