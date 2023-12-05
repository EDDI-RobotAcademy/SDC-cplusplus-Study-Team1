//
// Created by eddi on 23. 11. 30.
//

#include "AccountServiceImpl.h"
#include <iostream>

AccountServiceImpl::AccountServiceImpl(std::shared_ptr<AccountRepository> accountRepository) : accountRepository(accountRepository) { }

std::vector<AccountResponse> AccountServiceImpl::accountlist() {
    std::cout << "AccountService: 리스트 출력!" << std::endl;

    accountRepository->findAll();

    return std::vector<AccountResponse>();
}