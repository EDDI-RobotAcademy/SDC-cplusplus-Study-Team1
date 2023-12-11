//
// Created by eddi on 23. 12. 4.
//
#include <algorithm>
#include "AccountRepositoryImpl.h"
#include "../../mysql/DbProcess.h"
#include "../../console/user_keyboard/user_keyboard_input.h"
#include "../service/request/AccountLoginRequest.h"


AccountRepositoryImpl& AccountRepositoryImpl::getInstance()
{
    static AccountRepositoryImpl instance;
    return instance;
}




// 회원 정보 저장
Account *AccountRepositoryImpl::registerinfosave(Account *account)
{
    std::cout << "AccountReopository: 입력받은 회원정보 저장!" << std::endl;

    //Account *account = new Account(); //동적 할당 account 포인터 객체 생성

    DbProcess* dbInstance = DbProcess::getInstance();

    // 아이디, 비번 받아오는 걸로 수정해야 하는디~
    std::string accountId = account->getAccountId();
    std::string password = account->get_password();

    // 아이디 중복 확인
    int check_id = dbInstance->checkid(accountId);
    if(check_id == 0)
    {
        std::cout << "회원가입 실패"<<std::endl;
    }
    else if(check_id == 1)
    {
        // 아이디랑 비번 테이블에 넣을 것이여~
        std::string queryString = "INSERT INTO account (account_id, password) VALUES \
                      ('" + accountId + "', '" + password + "' )";

        dbInstance->insertData(queryString);
    }

    //delete account;



    return account;
}


