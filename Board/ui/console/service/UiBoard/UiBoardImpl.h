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
    std::vector<BoardResponse> UiServiceEditHandler() override;
    std::vector<BoardResponse> UiServiceReadHandler() override;
    std::vector<BoardResponse> UiServiceRemoveHandler() override;
};

class UiServiceCreateHandler {
private:

public:
    UiServiceCreateHandler();
//    std::string getTitle();
//    std::string getWriter();
//    std::string getContent();
    void getCreatPost();
    ~UiServiceCreateHandler();
};

class UiServiceExitHandler {
private:

public:
    UiServiceExitHandler();
    ~UiServiceExitHandler();
};

class UiServiceModifyHandler {
private:

public:
    UiServiceEditHandler();
    ~UiServiceEditHandler();
};

class UiServiceReadHandler {
private:

public:
    UiServiceReadHandler();
    ~UiServiceReadHandler();
};

class UiServiceRemoveHandler {
private:

public:
    UiServiceRemoveHandler();
    ~UiServiceRemoveHandler();
};

#endif //CLASS_TEST_UIBOARDIMPL_H
