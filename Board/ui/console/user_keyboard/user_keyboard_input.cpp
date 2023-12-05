//
// Created by eddi on 23. 12. 4.
//

#include "user_keyboard_input.h"
#include "../../../utility/trim.h"

#include <cstring>

#include <termio.h>
#include <csignal>

void user_keyboard_input::get_user_keyboard_input(std::string *keyboard_input)
{
    read(0, keyboard_input, MAX_USER_KEYBOARD_INPUT);

    trim _trim;

    _trim.trim_whitespaces(reinterpret_cast<char **>(keyboard_input));
    _trim.trim_wide_whitespaces(reinterpret_cast<wchar_t *>(&keyboard_input));
}

void user_keyboard_input::get_user_keyboard_input_with_message(std::string *output_message, std::string *keyboard_input)
{
    write(1, output_message, strlen(reinterpret_cast<const char *>(output_message)));
    get_user_keyboard_input(keyboard_input);

    trim _trim;

    _trim.trim_whitespaces(reinterpret_cast<char **>(&keyboard_input));
    _trim.trim_wide_whitespaces(reinterpret_cast<wchar_t *>(&keyboard_input));

    std::cout<< "작동됨"<<std::endl;
}

void user_keyboard_input::get_user_keyboard_hidden_input_with_message(
        char *output_message, char *keyboard_hidden_input)
{
    struct termios old_terminal, new_terminal;
    int length = 0;
    char character;

    write(1, output_message, strlen(output_message));

    tcgetattr(STDIN_FILENO, &old_terminal);
    new_terminal = old_terminal;

    new_terminal.c_lflag &= ~(ECHO);

    tcsetattr(STDIN_FILENO, TCSANOW, &new_terminal);

    read(0, keyboard_hidden_input, MAX_USER_KEYBOARD_INPUT);
    length = strlen(keyboard_hidden_input);
    keyboard_hidden_input[length] = '\0';

    tcsetattr(STDIN_FILENO, TCSANOW, &old_terminal);
    printf("\n");

    trim _trim;

    _trim.trim_whitespaces(&keyboard_hidden_input);
    _trim.trim_wide_whitespaces(reinterpret_cast<wchar_t *>(&keyboard_hidden_input));

}

user_keyboard_input::user_keyboard_input() {

}

user_keyboard_input::~user_keyboard_input() {

}
