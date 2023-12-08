//
// Created by eddi on 23. 12. 4.
//


#ifndef CLASS_TEST_ACCOUNTREPOSITORYIMPL_H
#define CLASS_TEST_ACCOUNTREPOSITORYIMPL_H


#include "AccountRepositohttps://github.com/EDDI-RobotAcademy/SDC-cplusplus-Study-Team1/pull/35/conflict?name=Board%252Fmysql%252FDbProcess.cpp&ancestor_oid=d75b08f662485cedda02a4ceac0ff868468a2c15&base_oid=49c3e3b571d6ea7433e2d933d3b1c56454a34f33&head_oid=9343353046b765d4d5bbde9ea7f55b6da7436b08ry.h"

class AccountRepositoryImpl : public AccountRepository {

public:

    std::vector<Account> regsave() override;
    std::vector<Account> registerinfosave() override;
    bool AccountIDoverlapcheck(const std::string& accountId);
    std::vector<Account> loginsave() override;
};


#endif //CLASS_TEST_ACCOUNTREPOSITORYIMPL_H