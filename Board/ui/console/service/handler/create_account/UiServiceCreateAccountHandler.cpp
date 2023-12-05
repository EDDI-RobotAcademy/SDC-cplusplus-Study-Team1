//
// Created by eddi on 23. 12. 5.
//
#include <iostream>
#include "UiServiceCreateAccountHandler.h"
#include "../../../user_keyboard/user_keyboard_input.h"

UiServiceCreateAccountHandler::UiServiceCreateAccountHandler() {
    std::cout<<"회원가입을 위한 정보를 기입하세요"<<std::endl;
}

void UiServiceCreateAccountHandler::getCreateAccount() {
    user_keyboard_input _user_keyboard_input;

    std::string id_print = "\nID를 입력하세요: ";
    std::string password_print = "\n비밀번호를 입력하세요: ";



    _user_keyboard_input.get_user_keyboard_input_with_message(id_print,ID);
    _user_keyboard_input.get_user_keyboard_input_with_message(password_print,password);



}