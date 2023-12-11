#include <iostream>
#include <memory>
#include "board/controller/BoardController.h"
#include "board/service/BoardServiceImpl.h"
#include "board/repository/BoardRepository.h"
#include "board/repository/BoardRepositoryImpl.h"
#include "console/window/console_window.h"

#include "account/controller/AccountController.h"
#include "account/service/AccountServiceImpl.h"
#include "account/repository/AccountRepository.h"
#include "account/repository/AccountRepositoryImpl.h"
#include "mysql/DbProcess.h"


void initializeMysqlConnection()
{
    // mysql 접속시작
    const char* DB_HOST = "localhost";
    const char* DB_USER = "eddi";
    const char* DB_PASS = "eddi@123";
    const char* DB_NAME = "test_db";

    DbProcess* dbInstance = DbProcess::getInstance(DB_HOST, DB_USER, DB_PASS, DB_NAME);
}

void init_singleton_object()
{
    AccountRepositoryImpl& repository = AccountRepositoryImpl::getInstance();
    std::shared_ptr<AccountService> service =
            std::make_shared<AccountServiceImpl>(
                    std::make_shared<AccountRepositoryImpl>());
    AccountController& controller = AccountController::getInstance(service);

}

int main() {
    initializeMysqlConnection();
    init_singleton_object();
//    BoardRepository *boardRepository = new BoardRepositoryImpl();
//    BoardService* boardService = new BoardServiceImpl();
/*    auto boardRepository = std::make_shared<BoardRepositoryImpl>();
    auto boardService = std::make_shared<BoardServiceImpl>(boardRepository);
    auto boardController = std::make_shared<BoardController>(boardService);
    boardController->boardList();*/

    //account테이블 실행 확인용
//    auto accountRepository = std::make_shared<AccountRepositoryImpl>();
//    auto accountService = std::make_shared<AccountServiceImpl>(accountRepository);
//    auto accountController = std::make_shared<AccountController>(accountService);
//
////    accountController->accountreg();
//    accountController->accountlogin();


    console_window _console_window;
    //std::make_shared<UiServiceCreateHandler>();
    _console_window.start_console_ui_window();
    return 0;
}

