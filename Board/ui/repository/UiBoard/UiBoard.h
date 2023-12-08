//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_UIBOARD_H
#define CLASS_TEST_UIBOARD_H

#include <vector>
#include "../../service/response/UiResponse.h"
#include "../../../board/service/response/BoardResponse.h"
#include "../../../board/entity/Board.h"

class UiBoard {
public:
    virtual ~UiBoard() = default;
    virtual Board *UiServiceCreateHandler() = 0;
    virtual std::vector<BoardResponse> UiServiceBoardExitHandler() = 0;
    virtual std::vector<BoardResponse> UiServiceEditHandler() = 0;
    virtual std::vector<BoardResponse> UiServiceReadHandler() = 0;
    virtual std::vector<BoardResponse> UiServiceRemoveHandler() = 0;
};

#endif //CLASS_TEST_UIBOARD_H
