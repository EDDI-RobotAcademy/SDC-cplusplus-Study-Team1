//
// Created by eddi on 23. 12. 4.
//

#include "console_window.h"
#include "../user_keyboard/user_keyboard_input.h"
#include <memory>
#include "../../board/controller/BoardController.h"
#include "../../board/service/BoardServiceImpl.h"
#include "../../board/repository/BoardRepository.h"
#include "../../board/repository/BoardRepositoryImpl.h"
#include "../user_keyboard/user_keyboard_input.h"
#include "../../ui/service/UiService.h"
#include "../../ui/service/UiServiceImpl.h"
#include "../../ui/repository/UiBoard/UiBoardImpl.h"
#include "../../ui/repository/UiAccount/UiAccountImpl.h"
#include "../../ui/controller/UiController.h"
#include "../../ui/controller/UiControllerCommand.h"

#include <string>
#include <iostream>
#include <cstdlib>

void console_window::start_console_ui_window()
{
    //board_api_create_request_form *create_request_form;
    void *request_form;
    void *response_form;

    int user_choice_command_number;
    bool player_enter_quit = false;

    std::cout << "start ui loop" << std::endl;
    auto boardRepository = std::make_shared<BoardRepositoryImpl>();
    auto boardService = std::make_shared<BoardServiceImpl>(boardRepository);
    auto boardController = std::make_shared<BoardController>(boardService);
    boardController->boardList();

    auto uiAccount = std::make_shared<UiAccountImpl>();
    auto uiBoard = std::make_shared<UiBoardImpl>();
    auto uiService = std::make_shared<UiServiceImpl>(uiAccount, uiBoard);
    auto uiController = std::make_shared<UiController>(uiService);
    uiController->initializeCommandTable();

    user_keyboard_input _user;
    // UiBoardImpl 포인터 ( ui / console / UiBoard ) - 추후 사용을 위해 기입함(불필요 시 삭제)
    // 사용 예시 ) uiBoard->UiServiceCreateHandler();

    while (!player_enter_quit)
    {
        user_choice_command_number = user_choice_number_for_board_command();
        uiController->commandTable[user_choice_command_number](uiController, nullptr);
    }


}

int console_window::user_choice_number_for_board_command()
{
    std::string keyboard_input;

    std::string command_message = "0번 회원 가입\n"
                                  "1번 로그인\n"
                                  "2번 종료\n";
//    std::string command_message = "0번. 게시물 전체 조회\n"
//                             "1번. 게시물 작성\n"
//                             "2번. 게시물 읽기\n"
//                             "3번. 게시물 수정\n"
//                             "4번. 게시물 삭제\n"
//                             "5번. 종료\n";
    user_keyboard_input _userKeyboardInput;
    _userKeyboardInput.get_user_keyboard_input_with_message(command_message, keyboard_input);

    return atoi(keyboard_input.c_str());
}

console_window::console_window() {

}

console_window::~console_window() {

}
