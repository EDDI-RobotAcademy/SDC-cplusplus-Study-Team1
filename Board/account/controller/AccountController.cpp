//
// Created by eddi on 23. 12. 4.
//

#include "AccountController.h"


#include "../service/AccountServiceImpl.h"
#include "../repository/AccountRepositoryImpl.h"

#include "request_form/AccountLoginRequestForm.h"
#include "request_form/AccountRegisterRequestForm.h"

#include "../service/request/AccountRegisterRequest.h"
#include "../service/request/AccountLoginRequest.h"

#include "response_form/AccountRegisterResponseForm.h"
#include "response_form/AccountLoginResponseForm.h"

#include "../service/response/AccountRegisterResponse.h"
#include "../service/response/AccountLoginResponse.h"

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

AccountRegisterResponseForm *
AccountController::accountreg(AccountRegisterRequestForm *requestForm)
{
    AccountRegisterResponse *response =
            accountService->create(requestForm->toAccountRegisterRequest());

    if (response == nullptr) { return nullptr; }

    return response->toResponseForm();
}

AccountLoginResponseForm *
AccountController::accountlogin(AccountLoginRequestForm *requestForm)
{
    AccountLoginResponse *response =
            accountService->signIn(requestForm->toAccountLoginRequest());

    if (response == nullptr) { return nullptr; }

    return response->toResponseForm();
}