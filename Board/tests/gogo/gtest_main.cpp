#include <gtest/gtest.h>
// 테스트 부분의 경로
#include "../../board/entity/Board.h"

TEST(boardEntity, createBoardEntity)
{
    Board *board = new Board(0, "hi", "", "why");
    board->printBoardInfo();

    EXPECT_NE(board, nullptr);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
