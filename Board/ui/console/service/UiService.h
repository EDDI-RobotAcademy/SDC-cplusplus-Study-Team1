//
// Created by eddi on 23. 12. 6.
//

#ifndef CLASS_TEST_UISERVICE_H
#define CLASS_TEST_UISERVICE_H

#include <vector>
#include "response/UiResponse.h"


class UiService {
public:
    virtual ~UiService() = default;
    //virtual std::vector<UiResponse> list() = 0;
    virtual void exit() = 0;
};


#endif //CLASS_TEST_UISERVICE_H
