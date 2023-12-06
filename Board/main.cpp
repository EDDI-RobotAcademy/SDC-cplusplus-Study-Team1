#include <iostream>
#include <memory>
#include "board/controller/BoardController.h"
#include "board/service/BoardServiceImpl.h"
#include "board/repository/BoardRepository.h"
#include "board/repository/BoardRepositoryImpl.h"
#include "ui/console/window/console_window.h"
#include "ui/console/service/handler/create/UiServiceCreateHandler.h"

#include "account/controller/AccountController.h"
#include "account/service/AccountServiceImpl.h"
#include "account/repository/AccountRepository.h"
#include "account/repository/AccountRepositoryImpl.h"

int main() {

//    BoardRepository *boardRepository = new BoardRepositoryImpl();
//    BoardService* boardService = new BoardServiceImpl();
/*    auto boardRepository = std::make_shared<BoardRepositoryImpl>();
    auto boardService = std::make_shared<BoardServiceImpl>(boardRepository);
    auto boardController = std::make_shared<BoardController>(boardService);
    boardController->boardList();*/

//    account테이블 실행 확인용
//    auto accountRepository = std::make_shared<AccountRepositoryImpl>();
//    auto accountService = std::make_shared<AccountServiceImpl>(accountRepository);
//    auto accountController = std::make_shared<AccountController>(accountService);
//    accountController->accountlist();

    console_window _console_window;
//    std::make_shared<UiServiceCreateHandler>();
    _console_window.start_console_ui_window();
    return 0;
}

