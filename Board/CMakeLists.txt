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
        ui/console/service/UiBoard/UiBoardImpl.cpp
        ui/console/service/UiBoard/UiBoardImpl.h
        ui/console/service/UiBoard/UiBoard.h
        account/repository/AccountRepository.h
        account/service/AccountServiceImpl.cpp
        account/service/AccountServiceImpl.h
        ui/console/service/response/UiResponse.cpp
        ui/console/service/response/UiResponse.h
        ui/console/service/UiAccount/UiAccountImpl.cpp
        ui/console/service/UiAccount/UiAccountImpl.h
        ui/console/service/UiAccount/UiAccount.h
        ui/console/service/UiServiceImpl.cpp
        ui/console/service/UiServiceImpl.h
        ui/console/service/UiService.h
        account/controller/request_form/AccountLoginRequestForm.cpp
        account/controller/request_form/AccountLoginRequestForm.h
        account/controller/request_form/AccountRegisterRequestForm.cpp
        account/controller/request_form/AccountRegisterRequestForm.h
        account/controller/response_form/AccountLoginResponseForm.cpp
        account/controller/response_form/AccountLoginResponseForm.h
        account/controller/response_form/AccountRegisterResponseForm.cpp
        account/controller/response_form/AccountRegisterResponseForm.h

)

target_include_directories(class_test PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(class_test PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})