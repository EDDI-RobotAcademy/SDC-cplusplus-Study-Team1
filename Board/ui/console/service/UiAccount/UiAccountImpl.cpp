//
// Created by eddi on 23. 12. 6.
//

#include <vector>
#include <iostream>
#include "UiAccountImpl.h"
#include "../../../../board/service/response/BoardResponse.h"


std::vector<BoardResponse> UiAccountImpl::UiServiceLoginHandler() {
    std::vector<BoardResponse> boardResponses;
    std::cout << "로그인을 해주세요" << std::endl;

    std::string user;
    std::string password;

    std::cout << "\nID를 입력하세요: ";
    std::cin >> user;
    std::cout << "\n비밀번호를 입력하세요: ";
    std::cin >> password;

    std::cout <<"ID : "<< user << "비밀번호 : " <<password << std::endl; //확인용

    bool loginSuccess = false;

    if (password == "password")
        {
            loginSuccess = true;
        }
    if (loginSuccess)
        {
            std::cout << "로그인 성공!" << std::endl;

            return boardResponses;
        }
    else
        {
            std::cout << "로그인 실패!" << std::endl;

            return std::vector<BoardResponse>();
        }
}


std::vector<BoardResponse> UiAccountImpl::UiServiceCreateAccountHandler()
{
//    std::cout << "UiBoardImpl:: UiServiceExitHandler:출력!" << std::endl;


}


std::vector<BoardResponse> UiAccountImpl::UiServiceExitHandler()
{
    std::cout << "UiBoardImpl:: UiServiceModifyHandler:출력!" << std::endl;
}