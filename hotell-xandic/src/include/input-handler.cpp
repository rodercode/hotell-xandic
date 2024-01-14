#include<iostream>
#include "input-handler.h"

using std::string;

int InputHandler::convertStringToInt(string input) {
    try {
        return std::stoi(input);
    }
    catch (std::invalid_argument& e) {
        std::cout << "Exception: " << e.what() << "\n";
    }
}

string InputHandler::getUserInput(string prompt) {
    string input;
    std::cout << prompt;
    std::cin >> input;

    return input;
}