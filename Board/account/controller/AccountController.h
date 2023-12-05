//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_ACCOUNTCONTROLLER_H
#define CLASS_TEST_ACCOUNTCONTROLLER_H


#include <memory>
#include <vector>

#include "../service/AccountService.h"

class AccountController {
private:
    std::shared_ptr<AccountService> accountService;
    //BoardService* boardService;

public:
    AccountController(std::shared_ptr<AccountService> accountService);
    //explicit BoardController(BoardService* service) : boardService(service) { }

    std::vector<AccountResponse> accountlist();
//    std::vector<BoardResponse> boardCreate() = 0;
//    std::vector<BoardResponse> boardRead() = 0;
//    std::vector<BoardResponse> boardModify() = 0;
//    void boardRemove() = 0;
};


#endif //CLASS_TEST_ACCOUNTCONTROLLER_H
