//
// Created by eddi on 23. 12. 6.
//

#ifndef CLASS_TEST_UIACCOUNTIMPL_H
#define CLASS_TEST_UIACCOUNTIMPL_H

#include <vector>
#include <sys/user.h>
#include "UiAccount.h"
#include "../../../board/service/response/BoardResponse.h"
#include "../../../account/controller/request_form/AccountLoginRequestForm.h"

class UiAccountImpl : public UiAccount {
public:
    AccountLoginRequestForm *UiServiceLoginHandler() override;
    AccountRegisterRequestForm *UiServiceCreateAccountHandler() override;
    std::vector<BoardResponse> UiServiceExitHandler() override;
};

#endif //CLASS_TEST_UIACCOUNTIMPL_H

