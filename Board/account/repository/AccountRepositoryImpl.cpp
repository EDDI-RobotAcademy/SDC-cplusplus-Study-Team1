//
// Created by eddi on 23. 12. 4.
//

#include "AccountRepositoryImpl.h"
#include "../../mysql/DbProcess.h"
#include "../../ui/console/user_keyboard/user_keyboard_input.h"


std::vector<Account> accountfetchResults(MYSQL* conn) {
    std::vector<Account> accountList;
    // db에는 있지만 void이기 때문에 변형해서 사용해야함;
//    std::string insertQuery = "INSERT INTO account (account_id, password, reg_date, upd_date) VALUES \
//                               ('테스트qwer', '테스트ffff', now(6), now(6))";

    const std::string& selectQuery = "SELECT * FROM account";

    //mysql_query로 select가 실행됨
    if (mysql_query(conn, selectQuery.c_str()) == 0) {
        // result에 결과값이 저장됨
        MYSQL_RES* result = mysql_store_result(conn);
        if (result == nullptr) {
            std::cerr << "mysql_store_result() failed" << std::endl;
            return accountList;
        }

        MYSQL_ROW row;
        // 루프를 돌면서 Board 객체를 만듬
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


// 회원 정보 저장
std::vector<Account> AccountRepositoryImpl::regsave()
{
    std::cout << "AccountReopository: 입력받은 회원정보 저장!" << std::endl;

    Account *account = new Account(); //동적 할당 account 포인터 객체 생성

    DbProcess* dbInstance = DbProcess::getInstance();

    // 아이디, 비번 받아오는 걸로 수정해야 하는디~
    std::string accountId = "iiiii";
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