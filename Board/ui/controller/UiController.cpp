//
// Created by eddi on 23. 12. 8.
//

#include "UiController.h"
#include "UiControllerCommand.h"

UiController::UiController(std::shared_ptr<UiService> uiService) : uiService(uiService) { }


void UiController::initializeCommandTable() {
    commandTable.resize(static_cast<size_t>(UiControllerCommand::END));

    //commandTable[static_cast<size_t>(UiControllerCommand::LOGIN)] =
            +[](UiController* controller, void* data) { controller->accountLogin(); };

    commandTable[static_cast<size_t>(UiControllerCommand::ACCOUNTEXIT)] =
            +[](UiController* controller, void* data) { controller->accountExit(); };
}

void UiController::accountLogin() {

    uiService->accountLogin();
}

UiController::~UiController() {

}

void UiController::accountExit() {
    uiService->accountExit();
}


