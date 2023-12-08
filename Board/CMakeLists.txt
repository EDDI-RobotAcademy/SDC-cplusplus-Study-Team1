cmake_minimum_required(VERSION 3.16)
project(class_test)

set(CMAKE_CXX_STANDARD 17)

include(FindPkgConfig)
pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)

link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})

add_executable(class_test main.cpp
        board/controller/BoardController.cpp
        board/controller/BoardController.h
        board/service/BoardService.h
        board/service/response/BoardResponse.cpp
        board/service/response/BoardResponse.h
        board/service/BoardServiceImpl.cpp
        board/service/BoardServiceImpl.h
        board/entity/Board.cpp
        board/entity/Board.h
        board/repository/BoardRepository.h
        mysql/DbProcess.cpp
        mysql/DbProcess.h
        board/repository/BoardRepositoryImpl.cpp
        board/repository/BoardRepositoryImpl.h
        account/entity/Account.cpp
        account/entity/Account.h
        account/controller/AccountController.cpp
        account/controller/AccountController.h
        account/repository/AccountRepositoryImpl.h
        account/repository/AccountRepositoryImpl.cpp
        account/service/AccountService.h
        ui/console/window/console_window.cpp
        ui/console/window/console_window.h
        ui/console/user_keyboard/user_keyboard_input.cpp
        ui/console/user_keyboard/user_keyboard_input.h
        account/service/response/AccountResponse.cpp
        account/service/response/AccountResponse.h
        account/service/request/AccountRequest.cpp
        account/service/request/AccountRequest.h
        ui/repository/UiBoard/UiBoardImpl.cpp
        ui/repository/UiBoard/UiBoardImpl.h
        ui/repository/UiBoard/UiBoard.h
        account/repository/AccountRepository.h
        account/service/AccountServiceImpl.cpp
        account/service/AccountServiceImpl.h
        ui/service/response/UiResponse.cpp
        ui/service/response/UiResponse.h
        ui/repository/UiAccount/UiAccountImpl.cpp
        ui/repository/UiAccount/UiAccountImpl.h
        ui/repository/UiAccount/UiAccount.h
        ui/service/UiServiceImpl.cpp
        ui/service/UiServiceImpl.h
        ui/service/UiService.h

)

target_include_directories(class_test PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(class_test PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})