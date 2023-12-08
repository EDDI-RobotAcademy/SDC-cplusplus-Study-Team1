//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_UIBOARDIMPL_H
#define CLASS_TEST_UIBOARDIMPL_H

#include <vector>
#include "UiBoard.h"
#include "../../../board/service/response/BoardResponse.h"
#include "../../../board/entity/Board.h"

class UiBoardImpl : public UiBoard {
public:

    Board *UiServiceCreateHandler() override;
    std::vector<BoardResponse> UiServiceBoardExitHandler() override;
    std::vector<BoardResponse> UiServiceEditHandler() override;
    std::vector<BoardResponse> UiServiceReadHandler() override;
    std::vector<BoardResponse> UiServiceRemoveHandler() override;
};

#endif //CLASS_TEST_UIBOARDIMPL_H
