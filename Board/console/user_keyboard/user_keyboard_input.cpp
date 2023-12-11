//
// Created by eddi on 23. 12. 4.
//

#include "user_keyboard_input.h"
#include "../window/console_window.h"

#include <iostream>
#include <string>
#include <algorithm>

void user_keyboard_input::get_user_keyboard_input_with_message(const std::string& output_message, std::string& keyboard_input)
{
    std::cout << output_message;
    if(!isFirst){
        std::cin.ignore();
    } else{
        isFirst = false;
    }


    std::getline(std::cin, keyboard_input);
    keyboard_input.erase(
            std::remove_if(keyboard_input.begin(),
                           keyboard_input.end(), ::isspace),
            keyboard_input.end());
}

user_keyboard_input::user_keyboard_input() {

}

user_keyboard_input::~user_keyboard_input() {

}
