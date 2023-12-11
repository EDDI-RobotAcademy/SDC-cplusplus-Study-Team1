//
// Created by eddi on 23. 12. 6.
//

#ifndef CLASS_TEST_UISERVICE_H
#define CLASS_TEST_UISERVICE_H

#include <vector>
#include "response/UiResponse.h"
#include "../../account/controller/request_form/AccountLoginRequestForm.h"
#include "../../account/controller/request_form/AccountRegisterRequestForm.h"

class UiService{
public:
    virtual ~UiService() = default;
    virtual AccountLoginRequestForm* accountLogin() = 0;
    virtual AccountRegisterRequestForm* creatId() =0;
    // virtual std::vector<UiResponse> creatId() = 0;
    virtual std::vector<UiResponse> accountExit() = 0;
    virtual std::vector<UiResponse> postCreat() = 0;
    virtual std::vector<UiResponse> postRead() = 0;
    virtual std::vector<UiResponse> postEdit() = 0;
    virtual std::vector<UiResponse> postRemove() = 0;
    virtual std::vector<UiResponse> boardExit() = 0;
};



#endif //CLASS_TEST_UISERVICE_H
