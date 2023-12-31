//
// Created by eddi on 23. 11. 30.
//

#ifndef CLASS_TEST_BOARDCONTROLLER_H
#define CLASS_TEST_BOARDCONTROLLER_H


#include <memory>
#include <vector>

#include "../service/BoardService.h"

class BoardController {
private:
    std::shared_ptr<BoardService> boardService;
    //BoardService* boardService;

public:
    BoardController(std::shared_ptr<BoardService> boardService);
    //explicit BoardController(BoardService* service) : boardService(service) { }

    std::vector<BoardResponse> boardList();
//    std::vector<BoardResponse> boardCreate() = 0;
//    std::vector<BoardResponse> boardRead() = 0;
//    std::vector<BoardResponse> boardModify() = 0;
//    void boardRemove() = 0;
};


#endif //CLASS_TEST_BOARDCONTROLLER_H
