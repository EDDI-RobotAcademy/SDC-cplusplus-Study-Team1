//
// Created by eddi on 23. 11. 30.
//

#include "AccountServiceImpl.h"
#include <iostream>

AccountServiceImpl::AccountServiceImpl(std::shared_ptr<AccountRepository> accountRepository) : accountRepository(accountRepository) { }

std::vector<AccountResponse> AccountServiceImpl::acregister()
{
    std::cout << "어카운트서비스임플 회원가입 " << std::endl;

    accountRepository->registerinfosave();

    return std::vector<AccountResponse>();
}


std::vector<AccountResponse> AccountServiceImpl::aclogin()
{
    std::cout << "어카운트서비스임플 로그인 " << std::endl;

    accountRepository->login();

    return std::vector<AccountResponse>();
}
