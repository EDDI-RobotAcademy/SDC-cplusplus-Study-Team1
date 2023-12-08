//
// Created by eddi on 23. 12. 4.
//
#include <algorithm>
#include "AccountRepositoryImpl.h"
#include "../../mysql/DbProcess.h"
#include "../../ui/console/user_keyboard/user_keyboard_input.h"


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
                    row[2],                   // password
                    row[3] ? row[3] : "NULL", // reg_date
                    row[4] ? row[4] : "NULL"  // upd_date
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


// account table에서 account_id 리스트만 가져올 것이여
std::vector<Account> getAccountIDs(MYSQL* conn) {
    std::vector<Account> accountIDList;

    const std::string& selectQuery = "SELECT account_id FROM account";

    if(mysql_query(conn, selectQuery.c_str()) == 0){
        MYSQL_RES* result = mysql_store_result(conn);
        if (result == nullptr) {
            std::cerr << "mysql_store_result() failed" << std::endl;
            return accountIDList;
        }

        MYSQL_ROW row; // 한 행의 데이터
        while ((row = mysql_fetch_row(result)) != nullptr) {
            Account accountID(
                    0,                            // id
                    row[1],                 // account_id
                    "",                      // password
                    row[3] ? row[3] : "NULL", // reg_date
                    row[4] ? row[4] : "NULL"  // upd_date
            );
            accountIDList.push_back(accountID);
        }
        mysql_free_result(result);
    }
    else{
        std::cerr << "mysql_query() failed" << std::endl;
    }

    return accountIDList;
}


// 회원 정보 저장
std::vector<Account> AccountRepositoryImpl::registerinfosave()
{
    std::cout << "AccountReopository: 입력받은 회원정보 저장!" << std::endl;

    Account *account = new Account(); //동적 할당 account 포인터 객체 생성

    DbProcess* dbInstance = DbProcess::getInstance();


    // 아이디, 비번 받아오는 걸로 수정해야 하는디~
    std::string accountId = "iiiii";

    // 아이디 중복 확인 여기에 삽입...
    if (!AccountIDoverlapcheck(accountId))
    {
        return std::vector<Account>();
    }

    std::string password = "ppppp";

    // 아이디랑 비번 테이블에 넣을 것이여~
    std::string queryString = "INSERT INTO account (account_id, password) VALUES \
                      ('" + accountId + "', '" + password + "' )";

    dbInstance->insertData(queryString);
    delete account;

    std::vector<Account> accountList = accountfetchResults(dbInstance->getConn()); // db.getConn -> 저장된 데이터 불러오기

    //처리 결과 확인하는 부분(아이디와 비밀번호 잘 저장되었는지 출력)
    for (const auto& account : accountList) {
        account.printAccountInfo();
    }

    return accountList;
}


// 아이디 중복 체크 함수(비교)
bool AccountRepositoryImpl:: AccountIDoverlapcheck(const std::string& accountId)
{
    // 제대로 실행이 되나 확인용
    std::cout << "중복 아이디 확인" << std::endl;

    // account ID 리스트 가져오기.
    DbProcess* dbInstance = DbProcess::getInstance();
    std::vector<Account> accountIDList = getAccountIDs(dbInstance->getConn());

    auto accountWithId = std::find_if(accountIDList.begin(), accountIDList.end(),
                                      [&accountId](const Account& acc){ return acc.getAccountId() == accountId;});

    if (accountWithId != accountIDList.end()) {
        // 계정 ID가 이미 존재하므로 처리 중단
        std::cerr << "Error: 계정 ID가 이미 존재함!" << std::endl;
        return false;
    }
    return true;
}


// 로그인
std::vector<Account> AccountRepositoryImpl::loginsave()
{
//    std::cout << "AccountReopository: 로그인완료!" << std::endl;
//    // mysql 접속시작
//    const char* DB_HOST = "localhost";
//    const char* DB_USER = "eddi";
//    const char* DB_PASS = "eddi@123";
//    const char* DB_NAME = "test_db";
//
//    DbProcess db(DB_HOST, DB_USER, DB_PASS, DB_NAME);
//
//    if (!db.connect()) {
//        std::cerr << "Connection error" << std::endl;
//    }
//    // mysql 접속완료
//
//    std::vector<Account> accountList = accountfetchResults(db.getConn()); // db.getConn -> 저장된 데이터 불러오기
//
//    //처리 결과 학인하는 부분
//    for (const auto& account : accountList) {
//        account.printAccountInfo();
//    }
//
//    return accountList;
}