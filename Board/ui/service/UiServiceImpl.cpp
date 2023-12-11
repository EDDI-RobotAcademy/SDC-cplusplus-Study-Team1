//
// Created by eddi on 23. 12. 6.
//

#include <iostream>
#include "UiServiceImpl.h"
#include "../repository/UiAccount/UiAccount.h"


UiServiceImpl::UiServiceImpl(std::shared_ptr<UiAccount> uiAccount,std::shared_ptr<UiBoard> uiBoard) : uiAccount(uiAccount), uiBoard(uiBoard) { }



std::vector<UiResponse> UiServiceImpl::accountExit() {
    std::cout << "게시판을 종료합니다." << std::endl;

    uiAccount->UiServiceExitHandler();

    return std::vector<UiResponse>();
}

AccountLoginRequestForm* UiServiceImpl::accountLogin() {
    std::cout << "로그인을 합니다." << std::endl;

    return uiAccount->UiServiceLoginHandler();
}

AccountRegisterRequestForm*  UiServiceImpl::creatId() {
    std::cout << "회원가입 합니다." << std::endl;

    return  uiAccount->UiServiceCreateAccountHandler();
}

std::vector<UiResponse> UiServiceImpl::postCreat() {
    std::cout << "게시물을 생성합니다." << std::endl;

    uiBoard->UiServiceCreateHandler();

    return std::vector<UiResponse>();
}

std::vector<UiResponse> UiServiceImpl::postRead() {
    std::cout << "게시물을 읽어옵니다.." << std::endl;

    uiBoard->UiServiceReadHandler();

    return std::vector<UiResponse>();
}

std::vector<UiResponse> UiServiceImpl::postEdit() {
    std::cout << "게시물을 수정합니다.." << std::endl;

    uiBoard->UiServiceEditHandler();

    return std::vector<UiResponse>();
}

std::vector<UiResponse> UiServiceImpl::postRemove() {
    std::cout << "게시물을 삭제합니다." << std::endl;

    uiBoard->UiServiceRemoveHandler();

    return std::vector<UiResponse>();
}

std::vector<UiResponse> UiServiceImpl::boardExit() {
    std::cout << "게시판을 종료합니." << std::endl;

    uiBoard->UiServiceBoardExitHandler();

    return std::vector<UiResponse>();
}



