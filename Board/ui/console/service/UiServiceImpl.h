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
    //std::shared_ptr<> uiAccount;
    //std::shared_ptr<UiBoard> uiBoard;

public:
    //std::vector<UiResponse> list() override;
    void exit() override;
};


#endif //CLASS_TEST_UISERVICEIMPL_H
