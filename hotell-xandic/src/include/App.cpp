#include "App.h"
#include <iostream>

using std::string;

App::App(bool isRunning) {
	this->isRunning = isRunning;
}


void App::startLoop() {
	while (isRunning) {
		userInterface.displayMainMenu();
        string input = handler.getUserInput("Enter a choice: ");
        int strToInt = handler.convertStringToInt(input);
        
        switch (strToInt) {
        case 1:
            std::cout << "user was logged in\n";
            break;
        case 2:
            std::cout << "user was registrated \n";
            break;
        case 3:
            std::cout << "program was exited\n";
            isRunning = false;
            break;
        default:
            std::cout << "Invalid input was enter, please try again!\n";
        }

        userInterface.nextLine();
	}
}