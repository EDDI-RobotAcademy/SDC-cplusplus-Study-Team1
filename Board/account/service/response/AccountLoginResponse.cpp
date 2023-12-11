//
// Created by eddi on 23. 12. 11.
//

#include "AccountLoginResponse.h"
#include "../../controller/response_form/AccountLoginResponseForm.h"

AccountLoginResponse::AccountLoginResponse (int login_account_unique_id)
        : login_account_unique_id(login_account_unique_id) { }

AccountLoginResponseForm *AccountLoginResponse::toResponseForm()
{
    return new AccountLoginResponseForm(login_account_unique_id);
}
