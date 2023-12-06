//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_UIBOARD_H
#define CLASS_TEST_UIBOARD_H

#include <vector>
#include "../response/UiResponse.h"
#include "../../../../board/service/response/BoardResponse.h"

class UiBoard {
public:
    virtual ~UiBoard() = default;
    virtual std::vector<BoardResponse> UiServiceCreateHandler() = 0;
    virtual std::vector<BoardResponse> UiServiceExitHandler() = 0;
    virtual std::vector<BoardResponse> UiServiceModifyHandler() = 0;
    virtual std::vector<BoardResponse> UiServiceReadHandler() = 0;
    virtual std::vector<BoardResponse> UiServiceRemoveHandler() = 0;
};

#endif //CLASS_TEST_UIBOARD_H
