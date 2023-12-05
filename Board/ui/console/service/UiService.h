//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_UISERVICE_H
#define CLASS_TEST_UISERVICE_H

#include <vector>
#include "response/UiResponse.h"
#include "handler/create/UiServiceCreateHandler.h"
#include "handler/exit/UiServiceExitHandler.h"
#include "handler/modify/UiServiceModifyHandler.h"
#include "handler/read/UiServiceReadHandler.h"
#include "handler/remove/UiServiceRemoveHandler.h"

class UiService {
public:
    virtual ~UiService() = default;
    virtual std::vector<UiResponse> UiServiceCreateHandler() = 0;
    virtual std::vector<UiResponse> UiServiceExitHandler() = 0;
    virtual std::vector<UiResponse> UiServiceModifyHandler() = 0;
    virtual std::vector<UiResponse> UiServiceReadHandler() = 0;
    virtual std::vector<UiResponse> UiServiceRemoveHandler() = 0;
};

#endif //CLASS_TEST_UISERVICE_H
