//
// Created by eddi on 23. 11. 30.
//

#ifndef CLASS_TEST_ACCOUNTSERVICE_H
#define CLASS_TEST_ACCOUNTSERVICE_H

#include <vector>
#include "request/AccountLoginRequest.h"
#include "response/AccountLoginResponse.h"
#include "response/AccountRegisterResponse.h"
#include "request/AccountRegisterRequest.h"

class AccountService {
public:
    //virtual (가상 함수) => dummy 개념으로 활용 존재하지만 존재하지않은 것;
    virtual ~AccountService() = default;
    // BoardResponse 다발을 리턴하는 list 함수를 만들 예정! c에서 함수 포인터 테이블 과 같은 개
    virtual AccountRegisterResponse *acregister(AccountRegisterRequest *request) = 0;
    virtual AccountLoginResponse *aclogin(AccountLoginRequest *request) = 0;
};

#endif //CLASS_TEST_ACCOUNTSERVICE_H
