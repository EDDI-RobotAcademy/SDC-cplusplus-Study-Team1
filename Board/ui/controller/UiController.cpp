//
// Created by eddi on 23. 12. 8.
//

#include "UiController.h"
#include "UiControllerCommand.h"

UiController::UiController(std::shared_ptr<UiService> uiService) : uiService(uiService) { }


void UiController::initializeCommandTable() {
    commandTable.resize(static_cast<size_t>(UiControllerCommand::END));

    commandTable[static_cast<size_t>(UiControllerCommand::CREATID)] =
            +[](std::shared_ptr<UiController> controller, void* data) { controller->accountCreatId(); };

    commandTable[static_cast<size_t>(UiControllerCommand::LOGIN)] =
            +[](std::shared_ptr<UiController> controller, void* data) { controller->accountLogin(); };

    commandTable[static_cast<size_t>(UiControllerCommand::ACCOUNTEXIT)] =
            +[](std::shared_ptr<UiController> controller, void* data) { controller->accountExit(); };

}

void UiController::accountLogin() {

    uiService->accountLogin();
}

UiController::~UiController() {

}

void UiController::accountExit() {
    std::cout<< " 안녕" << std::endl;
    uiService->accountExit();
}

void UiController::accountCreatId() {
    uiService->creatId();
}

