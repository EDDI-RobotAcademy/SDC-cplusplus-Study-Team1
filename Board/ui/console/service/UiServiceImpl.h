//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_UISERVICEIMPL_H
#define CLASS_TEST_UISERVICEIMPL_H

#include <vector>
#include "UiService.h"
#include "response/UiResponse.h"

class UiServiceImpl : public UiService {

public:
    std::vector<UiResponse> UiServiceCreateHandler() override;
    std::vector<UiResponse> UiServiceExitHandler() override;
    std::vector<UiResponse> UiServiceModifyHandler() override;
    std::vector<UiResponse> UiServiceReadHandler() override;
    std::vector<UiResponse> UiServiceRemoveHandler() override;
};

#endif //CLASS_TEST_UISERVICEIMPL_H
