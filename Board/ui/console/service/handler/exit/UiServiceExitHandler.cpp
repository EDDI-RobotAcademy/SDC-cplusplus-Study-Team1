//
// Created by eddi on 23. 12. 4.
//

#include <iostream>
#include "UiServiceExitHandler.h"

UiServiceExitHandler::UiServiceExitHandler () {
    exit()
}


UiServiceExitHandler::~UiServiceExitHandler() {
    std::cout << "게시판을 종료합니다." << std::endl;
}