//
// Created by eddi on 23. 11. 29.
//

#ifndef CPP_TEST_DBPROCESS_H
#define CPP_TEST_DBPROCESS_H

#include <mysql/mysql.h>
#include <string>

class DbProcess {
public:
    DbProcess(const char *host, const char *user,const char*pass,const char* dbName);
    ~DbProcess();

    static DbProcess* getInstance(const char* host, const char* user, const char*pass, const char* dbName);
    static DbProcess* getInstance();

    bool connect();
    bool insertData(const std::string& queryString);

    bool updateData(int boardId, const std::string& newTitle, const std::string& newContent);
    bool deleteData(int boardId);
    void selectData();
    void readData(int boardId);
    bool checkid(std::string& accountId);
    bool checkAccount(std::string accountId, std::string password);


    MYSQL *getConn();


private:
    MYSQL* conn;
    const char* DB_HOST;
    const char* DB_USER;
    const char* DB_PASS;
    const char* DB_NAME;
    static DbProcess* instance;
};


#endif //CPP_TEST_DBPROCESS_H
