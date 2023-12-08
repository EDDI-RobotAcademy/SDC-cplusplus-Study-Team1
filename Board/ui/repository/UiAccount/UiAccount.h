//
// Created by eddi on 23. 12. 6.
//

#ifndef CLASS_TEST_UIACCOUNT_H
#define CLASS_TEST_UIACCOUNT_H

#include <vector>
#include "../../../board/service/response/BoardResponse.h"

class UiAccount {
public:
    virtual ~UiAccount() = default;
    virtual std::vector<BoardResponse> UiServiceLoginHandler() = 0;
    virtual std::vector<BoardResponse> UiServiceCreateAccountHandler() = 0;
    virtual std::vector<BoardResponse> UiServiceExitHandler() = 0;

};

#endif //CLASS_TEST_UIACCOUNT_H
