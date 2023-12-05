//
// Created by eddi on 23. 12. 4.
//


#include <vector>
#include <iostream>
#include "UiServiceImpl.h"
#include "handler/create/UiServiceCreateHandler.h"
#include "handler/exit/UiServiceExitHandler.h"
#include "handler/modify/UiServiceModifyHandler.h"
#include "handler/read/UiServiceReadHandler.h"
#include "handler/remove/UiServiceRemoveHandler.h"

std::vector<UiResponse> UiServiceImpl::UiServiceCreateHandler()
{
    std::cout << "UiServiceCreateHandler:출력!" << std::endl;
}


std::vector<UiResponse> UiServiceImpl::UiServiceExitHandler()
{
    std::cout << "UiServiceImpl:: UiServiceExitHandler:출력!" << std::endl;
}


std::vector<UiResponse> UiServiceImpl::UiServiceModifyHandler()
{
    std::cout << "UiServiceImpl:: UiServiceModifyHandler:출력!" << std::endl;
}


std::vector<UiResponse> UiServiceImpl::UiServiceReadHandler()
{
    std::cout << "UiServiceImpl:: UiServiceReadHandler:출력!" << std::endl;
}


std::vector<UiResponse> UiServiceImpl::UiServiceRemoveHandler()
{
    std::cout << "UiServiceImpl:: UiServiceRemoveHandler:출력!" << std::endl;
}