//
// Created by eddi on 23. 12. 4.
//

#ifndef CLASS_TEST_TRIM_H
#define CLASS_TEST_TRIM_H

#include <iostream>

class trim {
public:
    trim();
    bool is_ascii(const char *str);
    void trim_whitespaces(char **str);
    void trim_wide_whitespaces(wchar_t *str);
    ~trim();
};


#endif //CLASS_TEST_TRIM_H
