//
// Created by eddi on 23. 12. 6.
//

#ifndef CLASS_TEST_UIACCOUNTIMPL_H
#define CLASS_TEST_UIACCOUNTIMPL_H

#include <vector>
#include <sys/user.h>
#include "UiAccount.h"
#include "../../../../board/service/response/BoardResponse.h"

class UiAccountImpl : public UiAccount {
public:
    std::vector<BoardResponse> UiServiceLoginHandler() override;
    std::vector<BoardResponse> UiServiceCreateAccountHandler() override;
    std::vector<BoardResponse> UiServiceExitHandler() override;

};

class UiServiceLoginHandler {
private:

public:
    UiServiceLoginHandler();
    ~UiServiceLoginHandler();
};

class UiServiceCreateAccountHandler {
private:

public:
    UiServiceCreateAccountHandler();
    ~UiServiceCreateAccountHandler();
};

class UiServiceExitHandler {
public:
    UiServiceExitHandler();
    ~UiServiceExitHandler();
};




#endif //CLASS_TEST_UIACCOUNTIMPL_H

