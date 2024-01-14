#include<iostream>
#include "user-interface.h"

using std::string;

void UserInterface::displayMainMenu(){
	std::cout << "[1] Login\n";
	std::cout << "[2] Registration\n";
	std::cout << "[3] Exit\n";
}

void UserInterface::displayBookingMenu() {
	std::cout << "[1] Create booking";
	std::cout << "[2] Read all booking";
	std::cout << "[3] Update booking ";
	std::cout << "[1] Delete booking";
}

void UserInterface::printMessage(string message) {
	std::cout << message << '\n';
}

void UserInterface::nextLine() {
	std::cout << '\n';
}

