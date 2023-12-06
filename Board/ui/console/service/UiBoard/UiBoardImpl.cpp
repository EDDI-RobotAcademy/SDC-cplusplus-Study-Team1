//
// Created by eddi on 23. 12. 4.
//


#include <vector>
#include <iostream>
#include "UiBoardImpl.h"
#include "../../user_keyboard/user_keyboard_input.h"

std::vector<BoardResponse> UiBoardImpl::UiServiceCreateHandler() {
    std::cout << "UiServiceCreateHandler:출력!" << std::endl;

    //std::cout << "게시글을 작성합니다." << std::endl;

        user_keyboard_input _user_keyboard_input;

        std::string title_print = "\n제목을 입력하세요: ";
        std::string writer_print = "\n작성자를 입력하세요: ";
        std::string content_print = "\n내용을 입력하세요: ";

        std::string title;
        std::string writer;
        std::string content;

        _user_keyboard_input.get_user_keyboard_input_with_message(title_print, title);
        _user_keyboard_input.get_user_keyboard_input_with_message(writer_print, writer);
        _user_keyboard_input.get_user_keyboard_input_with_message(content_print, content);
}


std::vector<BoardResponse> UiBoardImpl::UiServiceExitHandler()
{
    std::cout << "UiServiceExitHandler:출력!" << std::endl;
    std::cout << "게시판을 종료합니다." << std::endl;
    exit(0);
}


std::vector<BoardResponse> UiBoardImpl::UiServiceModifyHandler()
{
    std::cout << "UiBoardImpl:: UiServiceModifyHandler:출력!" << std::endl;
}


std::vector<BoardResponse> UiBoardImpl::UiServiceReadHandler()
{
    std::cout << "UiBoardImpl:: UiServiceReadHandler:출력!" << std::endl;
}


std::vector<BoardResponse> UiBoardImpl::UiServiceRemoveHandler()
{
    std::cout << "UiBoardImpl:: UiServiceRemoveHandler:출력!" << std::endl;
}