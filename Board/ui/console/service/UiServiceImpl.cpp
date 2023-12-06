//
// Created by eddi on 23. 12. 6.
//

#include <iostream>
#include "UiServiceImpl.h"


/*
std::vector<UiResponse> UiServiceImpl::list() {
    std::cout << "UiService: Board 리스트 출력!" << std::endl;

    uiBoard->UiServiceExitHandler();

    return std::vector<UiResponse>();
}
*/

void UiServiceImpl::exit() {
    std::cout << "게시판을 종료합니다." << std::endl;
    ::exit(0);
}