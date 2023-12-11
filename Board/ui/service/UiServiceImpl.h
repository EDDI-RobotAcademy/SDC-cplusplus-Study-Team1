//
// Created by eddi on 23. 12. 6.
//

#ifndef CLASS_TEST_UISERVICEIMPL_H
#define CLASS_TEST_UISERVICEIMPL_H

#include "UiService.h"
#include "response/UiResponse.h"
#include "../repository/UiAccount/UiAccount.h"
#include "../repository/UiBoard/UiBoard.h"

#include <vector>
#include <memory>

class UiServiceImpl : public UiService {
private:
    std::shared_ptr<UiAccount> uiAccount;
    std::shared_ptr<UiBoard> uiBoard;

public:
    UiServiceImpl(std::shared_ptr<UiAccount> uiAccount, std::shared_ptr<UiBoard> uiBoard);
    AccountLoginRequestForm* accountLogin() override;
    AccountRegisterRequestForm* creatId() override;
    std::vector<UiResponse> accountExit() override;
    std::vector<UiResponse> postCreat() override;
    std::vector<UiResponse> postRead() override;
    std::vector<UiResponse> postEdit() override;
    std::vector<UiResponse> postRemove() override;
    std::vector<UiResponse> boardExit() override;
};


#endif //CLASS_TEST_UISERVICEIMPL_H
