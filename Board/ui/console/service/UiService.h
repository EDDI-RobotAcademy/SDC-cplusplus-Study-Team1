//
// Created by eddi on 23. 12. 6.
//

#ifndef CLASS_TEST_UISERVICE_H
#define CLASS_TEST_UISERVICE_H

#include <vector>
#include "response/UiResponse.h"

class UiService{
public:
    virtual ~UiService() = default;
    virtual std::vector<UiResponse> login() = 0;
    virtual std::vector<UiResponse> creatId() = 0;
    virtual std::vector<UiResponse> accountExit() = 0;
    virtual std::vector<UiResponse> postCreat() = 0;
    virtual std::vector<UiResponse> postRead() = 0;
    virtual std::vector<UiResponse> postEdit() = 0;
    virtual std::vector<UiResponse> postRemove() = 0;
    virtual std::vector<UiResponse> postExit() = 0;
};



#endif //CLASS_TEST_UISERVICE_H
