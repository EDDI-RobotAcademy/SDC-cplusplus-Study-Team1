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
        console/window/console_window.cpp
        console/window/console_window.h
        console/user_keyboard/user_keyboard_input.cpp
        console/user_keyboard/user_keyboard_input.h
        account/service/AccountService.h
        account/service/AccountServiceImpl.cpp
        account/service/AccountServiceImpl.h
        account/repository/AccountRepository.h
        account/repository/AccountRepositoryImpl.cpp
        account/repository/AccountRepositoryImpl.h
        account/entity/Account.cpp
        account/entity/Account.h
        account/controller/AccountController.cpp
        account/controller/AccountController.h
        ui/repository/UiBoard/UiBoardImpl.cpp
        ui/repository/UiBoard/UiBoardImpl.h
        ui/repository/UiBoard/UiBoard.h
        ui/service/response/UiResponse.cpp
        ui/service/response/UiResponse.h
        ui/repository/UiAccount/UiAccountImpl.cpp
        ui/repository/UiAccount/UiAccountImpl.h
        ui/repository/UiAccount/UiAccount.h
        ui/service/UiServiceImpl.cpp
        ui/service/UiServiceImpl.h
        ui/service/UiService.h
        ui/controller/UiControllerCommand.h
        ui/controller/UiController.cpp
        ui/controller/UiController.h
        account/controller/request_form/AccountLoginRequestForm.cpp
        account/controller/request_form/AccountLoginRequestForm.h
        account/controller/response_form/AccountLoginResponseForm.cpp
        account/controller/response_form/AccountLoginResponseForm.h
        account/service/request/AccountLoginRequest.cpp
        account/service/request/AccountLoginRequest.h
        account/service/response/AccountLoginResponse.cpp
        account/service/response/AccountLoginResponse.h
        account/controller/request_form/AccountRegisterRequestForm.cpp
        account/controller/request_form/AccountRegisterRequestForm.h
        account/controller/response_form/AccountRegisterResponseForm.cpp
        account/controller/response_form/AccountRegisterResponseForm.h
        account/service/request/AccountRegisterRequest.cpp
        account/service/request/AccountRegisterRequest.h
        account/service/response/AccountRegisterResponse.cpp
        account/service/response/AccountRegisterResponse.h

)

target_include_directories(class_test PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(class_test PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})