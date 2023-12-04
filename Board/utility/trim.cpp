//
// Created by eddi on 23. 12. 4.
//

#include "trim.h"

#include <cstring>
#include <iostream>

bool trim::is_ascii(const char *str)
{
    while (*str) {
        if ((unsigned char)(*str) > 127) {
            return false;
        }
        str++;
    }
    return true;
}

void trim::trim_whitespaces(char **str)
{
    if (str == nullptr || *str == nullptr) { return; }

    while (isspace((unsigned char)**str)) {
        (*str)++;
    }

    char *end = *str + strlen(*str) - 1;
    while (end > *str && isspace((unsigned char)*end)) {
        end--;
    }

    *(end + 1) = '\0';
}

void trim::trim_wide_whitespaces(wchar_t *str) {
    if (str == nullptr) { return; }

    // 앞쪽 공백 제거
    while (iswspace(*str)) {
        str++;
    }

    // 뒤쪽 공백 제거
    wchar_t *end = str + wcslen(str) - 1;
    while (end > str && iswspace(*end)) {
        end--;
    }

    // NULL 문자 추가하여 문자열 종료
    *(end + 1) = L'\0';
}

trim::trim() {

}

trim::~trim() {

}
