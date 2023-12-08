//
// Created by eddi on 23. 12. 8.
//

#ifndef CLASS_TEST_UICONTROLLER_H
#define CLASS_TEST_UICONTROLLER_H

#include <iostream>
#include <vector>
#include <memory>
#include "../service/UiService.h"

class UiController {
private:
    std::shared_ptr<UiService> uiService;

public:
    UiController(std::shared_ptr<UiService> uiService);
    ~UiController();
    using CommandFunction = void (*)(UiController*, void*);
    std::vector<CommandFunction> commandTable;

    void initializeCommandTable();
    void accountLogin();
    void accountExit();
};


#endif //CLASS_TEST_UICONTROLLER_H
