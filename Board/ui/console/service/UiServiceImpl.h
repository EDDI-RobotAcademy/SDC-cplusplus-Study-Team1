//
// Created by eddi on 23. 12. 6.
//

#ifndef CLASS_TEST_UISERVICEIMPL_H
#define CLASS_TEST_UISERVICEIMPL_H

#include "UiService.h"
#include "response/UiResponse.h"
#include "UiAccount/UiAccount.h"
#include "UiBoard/UiBoard.h"

#include <vector>
#include <memory>

class UiServiceImpl : public UiService {
private:
    std::shared_ptr<UiAccount> uiAccount;
    std::shared_ptr<UiBoard> uiBoard;

public:
    UiServiceImpl(std::shared_ptr<UiAccount> uiAccount,std::shared_ptr<UiBoard> uiBoard);
    std::vector<UiResponse> login() override;
    std::vector<UiResponse> creatId() override;
    std::vector<UiResponse> accountExit() override;
    std::vector<UiResponse> postCreat() override;
    std::vector<UiResponse> postRead() override;
    std::vector<UiResponse> postEdit() override;
    std::vector<UiResponse> postRemove() override;
    std::vector<UiResponse> postExit() override;

    ~UiServiceImpl() override;

};


#endif //CLASS_TEST_UISERVICEIMPL_H
