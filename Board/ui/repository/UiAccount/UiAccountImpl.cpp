//
// Created by eddi on 23. 12. 6.
//

#include <vector>
#include <iostream>
#include "UiAccountImpl.h"
#include "../../../board/service/response/BoardResponse.h"
#include "../../../account/controller/request_form/AccountLoginRequestForm.h"
#include "../../../account/controller/request_form/AccountRegisterRequestForm.h"


AccountLoginRequestForm *UiAccountImpl::UiServiceLoginHandler() {

    std::cout << "로그인을 해주세요" << std::endl;

    std::string user;
    std::string password;

    std::cout << "\nID를 입력하세요: ";
    std::cin >> user;
    std::cout << "\n비밀번호를 입력하세요: ";
    std::cin >> password;

    std::cout <<"ID : "<< user << "비밀번호 : " <<password << std::endl; //확인용

    return new AccountLoginRequestForm(user, password);
}

//std::vector<BoardResponse> UiAccountImpl::UiServiceCreateAccountHandler()
AccountRegisterRequestForm *UiAccountImpl::UiServiceCreateAccountHandler()
{
    //std::vector<BoardResponse> boardResponses;
    std::cout << "회원가입을 위한 정보를 기입하세요" << std::endl;

    std::string create_user;
    std::string create_password;

    std::cout << "\n사용 하실 아이디를 기입하세요 : ";
    std::cin >> create_user;
    std::cout << "\n비밀번호를 입력하세요: ";
    std::cin >> create_password;

    std::cout <<"ID : "<< create_user << "비밀번호 : " <<create_password << std::endl; //확인용

    return new AccountRegisterRequestForm(create_user,create_password);
    //return boardResponses;
}

std::vector<BoardResponse> UiAccountImpl::UiServiceExitHandler()
{
    std::cout << "사용을 종료합니다." << std::endl;
    exit(0);
}