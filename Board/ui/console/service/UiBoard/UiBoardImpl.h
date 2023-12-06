//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_UIBOARDIMPL_H
#define CLASS_TEST_UIBOARDIMPL_H

#include <vector>
#include "UiBoard.h"
#include "../../../../board/service/response/BoardResponse.h"

class UiBoardImpl : public UiBoard {
public:
    std::vector<BoardResponse> UiServiceCreateHandler() override;
    std::vector<BoardResponse> UiServiceExitHandler() override;
    std::vector<BoardResponse> UiServiceModifyHandler() override;
    std::vector<BoardResponse> UiServiceReadHandler() override;
    std::vector<BoardResponse> UiServiceRemoveHandler() override;
};

class UiServiceCreateHandler {
private:
    std::string title;
    std::string writer;
    std::string content;
public:
    UiServiceCreateHandler();
//    std::string getTitle();
//    std::string getWriter();
//    std::string getContent();
    void getCreatPost();
    ~UiServiceCreateHandler();
};

#endif //CLASS_TEST_UIBOARDIMPL_H
