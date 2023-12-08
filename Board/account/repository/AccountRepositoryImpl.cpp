//
// Created by eddi on 23. 12. 4.
//
#include <algorithm>
#include "AccountRepositoryImpl.h"
#include "../../mysql/DbProcess.h"
#include "../../console/user_keyboard/user_keyboard_input.h"


std::vector<Account> accountfetchResults(MYSQL* conn) {
    std::vector<Account> accountList;

    const std::string& selectQuery = "SELECT * FROM account";

    //mysql_query로 select가 실행됨
    if (mysql_query(conn, selectQuery.c_str()) == 0) {
        // result에 결과값이 저장됨
        MYSQL_RES* result = mysql_store_result(conn);
        if (result == nullptr) {
            std::cerr << "mysql_store_result() failed" << std::endl;
            return accountList;
        }

        MYSQL_ROW row; // 한 행의 데이터
        // 루프를 돌면서 account 객체를 만듬
        while ((row = mysql_fetch_row(result)) != nullptr) {
            Account account(
                    std::stoi(row[0]),        // id
                    row[1],                   // account_id
                    row[2]                  // password
//                    row[3] ? row[3] : "NULL", // reg_date
//                    row[4] ? row[4] : "NULL"  // upd_date
            );

            accountList.push_back(account);
            // 위의 내용을 accountList.라는 동적 배열에 할당함
        }

        mysql_free_result(result);
    } else {
        std::cerr << "mysql_query() failed" << std::endl;
    }

    return accountList;
}




// 회원 정보 저장
std::vector<Account> AccountRepositoryImpl::registerinfosave()
{
    std::cout << "AccountReopository: 입력받은 회원정보 저장!" << std::endl;

    Account *account = new Account(); //동적 할당 account 포인터 객체 생성

    DbProcess* dbInstance = DbProcess::getInstance();

    // 아이디, 비번 받아오는 걸로 수정해야 하는디~
    std::string accountId = "ffdfdfdss";
    std::string password = "ppppp";

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

    delete account;

    std::vector<Account> accountList = accountfetchResults(dbInstance->getConn()); // db.getConn -> 저장된 데이터 불러오기

    //처리 결과 확인하는 부분(아이디와 비밀번호 잘 저장되었는지 출력)
    for (const auto& account : accountList) {
        account.printAccountInfo();
    }

    return accountList;
}



// 로그인
std::vector<Account> AccountRepositoryImpl::login()
{
    std::cout << "로그인 시도!" << std::endl;

    std::string userId = "assss";
    std::string userPassword = "ppppp";

    DbProcess* dbInstance = DbProcess::getInstance();

    int check_AccountInfo = dbInstance->checkAccount(userId, userPassword);
    if(check_AccountInfo == 0){
        std::cout << "로그인 실패" << std::endl;
    }
    else if (check_AccountInfo == 1) {
        std::cout << "로그인 성공" << std::endl;
    }

    return std::vector<Account>();
}